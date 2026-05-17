/*
 * XREFs of LdrpLogError @ 0x180083E08
 * Callers:
 *     LdrpReleaseLoaderLock @ 0x18002086C (LdrpReleaseLoaderLock.c)
 *     LdrpMapDllNtFileName @ 0x180020A44 (LdrpMapDllNtFileName.c)
 *     LdrpCompleteMapModule @ 0x180021F28 (LdrpCompleteMapModule.c)
 *     LdrpSnapModule @ 0x180027FC0 (LdrpSnapModule.c)
 *     LdrpLoadDllInternal @ 0x18002DFFC (LdrpLoadDllInternal.c)
 *     LdrpCallInitRoutine @ 0x180031254 (LdrpCallInitRoutine.c)
 *     LdrpProcessWork @ 0x18004B260 (LdrpProcessWork.c)
 *     LdrUnlockLoaderLock @ 0x18007FAF0 (LdrUnlockLoaderLock.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogEtwEvent @ 0x1800D1E90 (LdrpLogEtwEvent.c)
 */

unsigned int *__fastcall LdrpLogError(int a1, char a2, char a3, __int64 a4)
{
  unsigned int *result; // rax
  __int64 v9; // r10
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rcx

  result = RtlGetCurrentServiceSessionId();
  if ( (_DWORD)result )
  {
    result = (unsigned int *)NtCurrentPeb();
    v9 = *((_QWORD *)result + 18) + 554LL;
  }
  else
  {
    v9 = 2147353476LL;
  }
  if ( *(_BYTE *)v9 )
  {
    result = (unsigned int *)NtCurrentPeb();
    if ( (result[222] & 4) != 0 )
    {
      result = RtlGetCurrentServiceSessionId();
      if ( (_DWORD)result )
      {
        result = (unsigned int *)NtCurrentPeb();
        v12 = *((_QWORD *)result + 18) + 555LL;
      }
      else
      {
        v12 = 2147353477LL;
      }
      if ( (*(_BYTE *)v12 & 0x20) != 0 )
      {
        LOBYTE(v11) = a3;
        LOBYTE(v10) = a2;
        return (unsigned int *)LdrpLogEtwEvent(5284, a1, v10, v11, a4, 0LL);
      }
    }
  }
  return result;
}
