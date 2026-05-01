/*
 * XREFs of ?HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z @ 0x180047058
 * Callers:
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180047218 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180047ED8 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180047F90 (-HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?HampActCheckEnterDependencyWorker@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x1800471A4 (-HampActCheckEnterDependencyWorker@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 */

__int64 __fastcall HampActBeginStateChange(__int64 a1, unsigned __int8 a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // r14d
  int v6; // eax
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  unsigned __int8 v11; // [rsp+30h] [rbp-39h] BYREF
  _BYTE v12[7]; // [rsp+31h] [rbp-38h] BYREF
  int v13; // [rsp+38h] [rbp-31h]
  __int64 v14; // [rsp+3Ch] [rbp-2Dh]
  int v15; // [rsp+44h] [rbp-25h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  __int64 v17; // [rsp+70h] [rbp+7h]
  __int64 v18; // [rsp+78h] [rbp+Fh]
  char *v19; // [rsp+80h] [rbp+17h]
  __int64 v20; // [rsp+88h] [rbp+1Fh]
  _BYTE *v21; // [rsp+90h] [rbp+27h]
  __int64 v22; // [rsp+98h] [rbp+2Fh]

  if ( (*(_BYTE *)(a1 + 496) & 1) != 0 )
  {
    return (unsigned int)-1073740682;
  }
  else
  {
    v5 = *(unsigned __int8 *)(a1 + 500);
    v4 = 0;
    v13 = 12;
    v14 = 2LL;
    v15 = 14;
    v6 = *(_DWORD *)&v12[4 * a2 + 3];
    if ( _bittest(&v6, v5) )
    {
      if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x28uLL) )
      {
        v18 = 8LL;
        v17 = a1 + 40;
        v19 = (char *)&v11;
        v21 = v12;
        v11 = a2;
        v20 = 1LL;
        v12[0] = v5;
        v22 = 1LL;
        TlgWrite(v7, &unk_18005B9EF, v8, v9, 5u, &pData);
      }
      *(_BYTE *)(a1 + 500) = a2;
      if ( (_BYTE)v5 == 2 )
        *(_BYTE *)(a1 + 501) = 0;
      *(_DWORD *)(a1 + 496) |= 1u;
      HampActCheckEnterDependencyWorker((struct _HAM_ACTIVITY *)a1);
    }
    else
    {
      return (unsigned int)-1073700861;
    }
  }
  return v4;
}
