/*
 * XREFs of ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x18004750C
 * Callers:
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180047218 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180047ED8 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180047F90 (-HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001F020 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001F6F0 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?HampHostComputeActivityCounters@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180043660 (-HampHostComputeActivityCounters@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180045038 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampActCheckEnterDependencyWorker@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x1800471A4 (-HampActCheckEnterDependencyWorker@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 */

void __fastcall HampActEndStateChange(struct _RM_HAM_ACTIVITY_HOST **a1, int a2)
{
  const struct _TlgProvider_t *v4; // rcx
  const GUID *v5; // r8
  const GUID *v6; // r9
  struct _RM_HAM_ACTIVITY_HOST *v7; // rcx
  int v8; // ebx
  struct _RM_HAM_ACTIVITY_HOST *v9; // rcx
  char v10; // [rsp+30h] [rbp-19h] BYREF
  char v11; // [rsp+31h] [rbp-18h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  char *v13; // [rsp+60h] [rbp+17h]
  int v14; // [rsp+68h] [rbp+1Fh]
  int v15; // [rsp+6Ch] [rbp+23h]
  char *v16; // [rsp+70h] [rbp+27h]
  int v17; // [rsp+78h] [rbp+2Fh]
  int v18; // [rsp+7Ch] [rbp+33h]
  char *v19; // [rsp+80h] [rbp+37h]
  int v20; // [rsp+88h] [rbp+3Fh]
  int v21; // [rsp+8Ch] [rbp+43h]

  HampHostAcquireLockExclusiveEx(a1[9], 0);
  if ( a2 )
  {
    if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x28uLL) )
    {
      v15 = 0;
      v18 = 0;
      v21 = 0;
      v13 = (char *)(a1 + 5);
      v16 = &v10;
      v11 = *((_BYTE *)a1 + 500);
      v19 = &v11;
      v14 = 8;
      v10 = 1;
      v17 = 1;
      v20 = 1;
      TlgWrite(v4, &unk_18005B9EF, v5, v6, 5u, &pData);
    }
    *((_WORD *)a1 + 250) = 1;
  }
  v7 = a1[9];
  *((_DWORD *)a1 + 124) &= ~1u;
  HampHostComputeActivityCounters(v7);
  HampActCheckEnterDependencyWorker((struct _HAM_ACTIVITY *)a1);
  v8 = *((_DWORD *)a1 + 124);
  v9 = a1[9];
  *((_DWORD *)a1 + 124) = v8 & 0xFFFFFFFD;
  HampHostReleaseLockExclusiveEx(v9);
  if ( (v8 & 2) != 0 )
    HampDepGroupRunStateChangeWorker(*((struct _HAM_DEPENDENCY_GROUP **)a1[9] + 80));
}
