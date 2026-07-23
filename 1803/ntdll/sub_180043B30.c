/*
 * XREFs of sub_180043B30 @ 0x180043B30
 * Callers:
 *     sub_18000FC70 @ 0x18000FC70 (sub_18000FC70.c)
 *     sub_18002C0DC @ 0x18002C0DC (sub_18002C0DC.c)
 *     sub_18003829C @ 0x18003829C (sub_18003829C.c)
 *     sub_18003B518 @ 0x18003B518 (sub_18003B518.c)
 *     sub_1800426E8 @ 0x1800426E8 (sub_1800426E8.c)
 *     sub_180043144 @ 0x180043144 (sub_180043144.c)
 *     sub_180046F60 @ 0x180046F60 (sub_180046F60.c)
 *     LdrUnlockLoaderLock @ 0x180047B80 (LdrUnlockLoaderLock.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_1800CBAB0 @ 0x1800CBAB0 (sub_1800CBAB0.c)
 */

int __fastcall sub_180043B30(int a1, char a2, char a3, __int64 a4)
{
  struct _PEB *v8; // rax
  __int64 v9; // r10
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rcx

  LODWORD(v8) = RtlGetCurrentServiceSessionId();
  if ( (_DWORD)v8 )
  {
    v8 = NtCurrentPeb();
    v9 = (__int64)&v8->SharedData->UserModeGlobalLogger[2];
  }
  else
  {
    v9 = 2147353476LL;
  }
  if ( *(_BYTE *)v9 )
  {
    v8 = NtCurrentPeb();
    if ( (v8->TracingFlags & 4) != 0 )
    {
      LODWORD(v8) = RtlGetCurrentServiceSessionId();
      if ( (_DWORD)v8 )
      {
        v8 = NtCurrentPeb();
        v12 = (__int64)&v8->SharedData->UserModeGlobalLogger[2] + 1;
      }
      else
      {
        v12 = 2147353477LL;
      }
      if ( (*(_BYTE *)v12 & 0x20) != 0 )
      {
        LOBYTE(v11) = a3;
        LOBYTE(v10) = a2;
        LODWORD(v8) = sub_1800CBAB0(5284, a1, v10, v11, a4, 0LL);
      }
    }
  }
  return (int)v8;
}
