/*
 * XREFs of PfSnOperationProcess @ 0x140447278
 * Callers:
 *     PfSnSetPrefetcherInformation @ 0x14046CE14 (PfSnSetPrefetcherInformation.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140019294 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PfSnFindImageFileName @ 0x140447420 (PfSnFindImageFileName.c)
 *     PfCalculateProcessHash @ 0x140447470 (PfCalculateProcessHash.c)
 *     PfSnBeginScenario @ 0x140453178 (PfSnBeginScenario.c)
 *     PfSnEndProcessTrace @ 0x140455060 (PfSnEndProcessTrace.c)
 *     PfSnCheckScenario @ 0x14057FA14 (PfSnCheckScenario.c)
 */

__int64 __fastcall PfSnOperationProcess(__int64 a1)
{
  bool v2; // zf
  PVOID v3; // rsi
  unsigned __int8 v4; // al
  bool v5; // cf
  _KPROCESS *Process; // r14
  int v7; // eax
  unsigned int v8; // ebx
  __int64 ImageFileName; // rbx
  unsigned int v11; // eax
  int v12; // eax
  __int64 v13; // r9
  int v14; // [rsp+38h] [rbp-29h] BYREF
  PVOID P; // [rsp+40h] [rbp-21h] BYREF
  _BYTE v16[16]; // [rsp+48h] [rbp-19h] BYREF
  wchar_t pszDest[32]; // [rsp+58h] [rbp-9h] BYREF

  v2 = *(_BYTE *)a1 == 1;
  v3 = 0LL;
  P = 0LL;
  if ( !v2 || (v4 = *(_BYTE *)(a1 + 1), v4 >= 2u) || *(_WORD *)(a1 + 2) )
  {
    v8 = -1073741811;
    goto LABEL_13;
  }
  if ( (v4 & 1) != 0 )
  {
    v5 = *(_DWORD *)(a1 + 4) < 2u;
  }
  else
  {
    v11 = *(_DWORD *)(a1 + 4);
    if ( (v11 & 4) != 0 && (v11 & 3) != 0 )
      return (unsigned int)-1073741811;
    v5 = v11 < 8;
  }
  if ( !v5 )
    return (unsigned int)-1073741811;
  if ( (int)PfSnCheckScenario(1LL, &v14) < 0 )
    return 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = PfCalculateProcessHash(Process, &P);
  v3 = P;
  v8 = v7;
  if ( v7 >= 0 )
  {
    ImageFileName = PfSnFindImageFileName(P, v16);
    if ( ImageFileName )
    {
      memset(pszDest, 0, sizeof(pszDest));
      RtlStringCbPrintfW(pszDest, 0x3CuLL, L"Op-%.17s-%08X", ImageFileName, Process[1].ThreadSeed[1]);
      v2 = (*(_BYTE *)(a1 + 1) & 1) == 0;
      *(_DWORD *)&pszDest[30] = *(_DWORD *)(a1 + 8);
      if ( v2 )
      {
        v12 = *(_DWORD *)(a1 + 4);
        v13 = v12 & 1;
        if ( (v12 & 2) != 0 || v14 == 2 )
        {
          v13 = (unsigned int)v13 | 2;
        }
        else if ( (v12 & 4) != 0 )
        {
          v13 = (unsigned int)v13 | 4;
        }
        PfSnBeginScenario(Process, pszDest, 1LL, v13);
      }
      else
      {
        PfSnEndProcessTrace(Process, (*(_DWORD *)(a1 + 4) & 1u) + 8, pszDest);
      }
      v8 = 0;
    }
    else
    {
      v8 = -1073741595;
    }
  }
LABEL_13:
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return v8;
}
