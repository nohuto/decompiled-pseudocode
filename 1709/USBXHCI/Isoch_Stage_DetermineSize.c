/*
 * XREFs of Isoch_Stage_DetermineSize @ 0x1C002A7E4
 * Callers:
 *     Isoch_PrepareStage @ 0x1C0028BB4 (Isoch_PrepareStage.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     Isoch_GetPacketLength @ 0x1C0028530 (Isoch_GetPacketLength.c)
 */

__int64 __fastcall Isoch_Stage_DetermineSize(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v7; // ebx
  unsigned int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // r10d
  unsigned int v12; // r15d
  __int64 v13; // r10
  unsigned int i; // r11d
  int v15; // r14d
  __int64 v16; // r12
  _QWORD v17[2]; // [rsp+40h] [rbp-28h] BYREF

  result = *(_QWORD *)(a1 + 40);
  v7 = *(_DWORD *)(a2 + 80) - *(_DWORD *)(a2 + 92) - *(_DWORD *)(a2 + 88);
  v8 = *(_DWORD *)(a1 + 4);
  if ( !*(_BYTE *)(result + 441) )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(result + 96) + 24LL);
    v17[0] = 0LL;
    v17[1] = 0LL;
    v10 = *(_QWORD *)(a2 + 48);
    LODWORD(v17[0]) = 1;
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, bool, _QWORD *))(*(_QWORD *)(v9 + 8) + 136LL))(
      v9,
      *(_QWORD *)(a3 + 64),
      0LL,
      v7,
      (*(_BYTE *)(v10 + 32) & 1) == 0,
      v17);
    result = *(unsigned int *)(a1 + 8);
    if ( HIDWORD(v17[0]) > (unsigned int)result )
    {
      result = (unsigned int)(((_DWORD)result << 12) - 4096);
      if ( (unsigned int)result < v8 )
        v8 = result;
    }
  }
  if ( v7 > v8 )
  {
    v12 = *(_DWORD *)(a3 + 40);
    v7 = 0;
    v13 = *(unsigned int *)(a1 + 356);
    for ( i = v12 / (unsigned int)v13; ; ++i )
    {
      v15 = 0;
      if ( (_DWORD)v13 )
      {
        v16 = v13;
        do
        {
          v15 += Isoch_GetPacketLength(a2, v12++);
          --v16;
        }
        while ( v16 );
      }
      result = v15 + v7;
      if ( (unsigned int)result > v8 )
        break;
      v7 += v15;
    }
    v11 = i * v13;
  }
  else
  {
    v11 = *(_DWORD *)(a2 + 96);
  }
  *(_DWORD *)(a3 + 52) = v7;
  *(_DWORD *)(a3 + 44) = v11 - 1;
  return result;
}
