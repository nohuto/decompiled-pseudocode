/*
 * XREFs of sub_180028238 @ 0x180028238
 * Callers:
 *     sub_180027E0C @ 0x180027E0C (sub_180027E0C.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwSetInformationThread @ 0x18009AC60 (ZwSetInformationThread.c)
 *     sub_180108970 @ 0x180108970 (sub_180108970.c)
 */

int __fastcall sub_180028238(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // r14
  int v5; // edi
  struct _PEB *v6; // rax
  __int64 v8; // rcx
  unsigned __int16 v9; // si
  unsigned __int16 v10; // bp
  __int64 v11; // rcx
  int v13; // [rsp+30h] [rbp-48h] BYREF
  _QWORD ThreadInformation[2]; // [rsp+38h] [rbp-40h] BYREF

  v4 = *(unsigned int *)(a2 + 344);
  v5 = a1;
  LODWORD(v6) = *(_DWORD *)(a1 + 428);
  v13 = a4;
  if ( a3 == (_DWORD)v4 )
  {
    if ( (_DWORD)v6 == -1 && !*(_BYTE *)(a2 + 352) )
    {
      *(_BYTE *)(a2 + 352) = 1;
      v6 = *(struct _PEB **)(a1 + 40);
      _InterlockedIncrement((volatile signed __int32 *)v6 + a3);
    }
  }
  else
  {
    if ( (_DWORD)v6 == -1 )
    {
      if ( *(_BYTE *)(a2 + 352) )
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v4));
      else
        *(_BYTE *)(a2 + 352) = 1;
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * a3));
    }
    *(_DWORD *)(a2 + 344) = a3;
    v8 = *(_QWORD *)(a1 + 48);
    v9 = *(_WORD *)(v8 + 16LL * a3 + 8);
    v10 = *(_WORD *)(v8 + 16 * v4 + 8);
    LODWORD(v6) = RtlGetCurrentServiceSessionId();
    if ( (_DWORD)v6 )
    {
      v6 = NtCurrentPeb();
      v11 = (__int64)&v6->SharedData->UserModeGlobalLogger[3];
    }
    else
    {
      v11 = 2147353478LL;
    }
    if ( *(_BYTE *)v11 )
      LODWORD(v6) = sub_180108970(v5, v4, a3, v10, v9);
    if ( v10 != v9 )
    {
      ThreadInformation[0] = 0LL;
      ThreadInformation[1] = v9;
      ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadGroupInformation, ThreadInformation, 0x10u);
      LODWORD(v6) = ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadIdealProcessor, &v13, 4u);
    }
  }
  return (int)v6;
}
