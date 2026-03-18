/*
 * XREFs of ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C0116C2C
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C011364C (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002730 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ??_GADAPTER_RENDER@@QEAAPEAXI@Z @ 0x1C001E314 (--_GADAPTER_RENDER@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00F925C (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0111244 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ??0ADAPTER_RENDER@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C01119FC (--0ADAPTER_RENDER@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0176FAC (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::CreateRenderCore(
        __int64 (__fastcall **a1)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *),
        struct ADAPTER_RENDER **a2)
{
  __int64 (__fastcall *v4)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // r8
  __int64 (__fastcall *v5)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  ADAPTER_RENDER *v10; // rax
  __int64 v11; // rcx
  ADAPTER_RENDER *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // esi
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 result; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // eax
  unsigned int v31; // eax
  __int64 v32; // rax

  if ( !a1 )
  {
    v24 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v24 + 24) = 497LL;
    WdLogEvent5_WdAssertion(v24);
  }
  if ( !a2 )
  {
    v25 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v25 + 24) = 498LL;
    WdLogEvent5_WdAssertion(v25);
  }
  if ( *((_BYTE *)a1 + 185) )
    goto LABEL_53;
  if ( !*((_BYTE *)a1 + 304)
    || !a1[40]
    || !a1[42]
    || !a1[43]
    || !a1[73]
    || !a1[74]
    || !a1[44]
    || !a1[48]
    || !a1[49]
    || !a1[50]
    || !a1[54]
    || !a1[55]
    || !a1[58]
    || !a1[70]
    || !a1[72]
    || !a1[57]
    || !a1[76] )
  {
    if ( (int)DXGADAPTER::GetDriverVersion((DXGADAPTER *)a1) < 1200 )
    {
      v26 = WdLogNewEntry5_WdError(v21);
      *(_QWORD *)(v26 + 24) = 574LL;
    }
    else
    {
      if ( !a1[40]
        && !a1[42]
        && !a1[43]
        && !a1[73]
        && !a1[74]
        && !a1[44]
        && !a1[48]
        && !a1[49]
        && !a1[50]
        && !a1[54]
        && !a1[55]
        && !a1[58]
        && !a1[72]
        && !a1[76]
        && !a1[41]
        && !a1[47]
        && !a1[75]
        && !a1[83]
        && !a1[45]
        && !a1[46]
        && !a1[69]
        && !a1[71]
        && !a1[77]
        && !a1[78]
        && !a1[79] )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v21, v20) + 24) = 562LL;
        result = 0LL;
        *a2 = 0LL;
        return result;
      }
      v26 = WdLogNewEntry5_WdError(v21);
      *(_QWORD *)(v26 + 24) = 556LL;
    }
    goto LABEL_131;
  }
  *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2) + 24) = 526LL;
  if ( !a1[71] )
    a1[71] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  if ( !a1[77] )
    a1[77] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  v4 = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  if ( !a1[78] )
    a1[78] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  if ( !a1[79] )
    a1[79] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  if ( !a1[69] )
    a1[69] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  if ( !a1[45] )
    a1[45] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  if ( !a1[46] )
    a1[46] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  v5 = a1[71];
  if ( v5 != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
  {
LABEL_86:
    if ( a1[79] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
      && a1[78] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
      && a1[77] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
    {
      goto LABEL_41;
    }
LABEL_101:
    v26 = WdLogNewEntry5_WdError(ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange);
    *(_QWORD *)(v26 + 24) = 627LL;
LABEL_131:
    WdLogEvent5_WdError(v26);
    return 3221225561LL;
  }
  if ( a1[77] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || a1[78] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || a1[79] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
  {
    if ( v5 == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
      goto LABEL_101;
    goto LABEL_86;
  }
LABEL_41:
  v6 = *((unsigned int *)a1 + 492);
  if ( (((_DWORD)v6 - 4096) & 0xFFFFFCFF) == 0 && (_DWORD)v6 != 4352 && (!a1[41] || !a1[47] || !a1[75]) )
  {
    v26 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v26 + 24) = 647LL;
    goto LABEL_131;
  }
  v7 = *((unsigned int *)a1 + 421);
  if ( (v7 & 4) != 0 )
  {
    if ( a1[83] )
    {
      if ( (int)DXGADAPTER::GetDriverVersion((DXGADAPTER *)a1) < 1105 )
      {
        v28 = WdLogNewEntry5_WdWarning(v23, v22, v4);
        *(_QWORD *)(v28 + 24) = a1;
        WdLogEvent5_WdWarning(v28);
        *((_DWORD *)a1 + 421) &= ~4u;
        a1[83] = 0LL;
      }
      v7 = *((unsigned int *)a1 + 421);
      if ( (v7 & 0x20000000) == 0 )
        goto LABEL_43;
      v29 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v29 + 24) = 668LL;
    }
    else
    {
      v29 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v29 + 24) = 656LL;
    }
LABEL_108:
    WdLogEvent5_WdError(v29);
    return 3221225485LL;
  }
LABEL_43:
  if ( *((_DWORD *)a1 + 419) > 4u )
    *((_DWORD *)a1 + 419) = 4;
  if ( *((_DWORD *)a1 + 418)
    && (a1[45] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
     || a1[46] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange) )
  {
    v26 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v26 + 24) = 683LL;
    goto LABEL_131;
  }
  v8 = *((_DWORD *)a1 + 424);
  if ( (v8 & 1) == 0 )
  {
    if ( (v8 & 4) == 0 && (v8 & 0x10) == 0 )
    {
      *((_DWORD *)a1 + 427) = 1;
      *((_DWORD *)a1 + 556) = 1;
      goto LABEL_48;
    }
    goto LABEL_109;
  }
  if ( *((int *)a1 + 492) < 0x2000 )
  {
    v30 = *((_DWORD *)a1 + 427);
    if ( v30 )
    {
      v31 = *((_DWORD *)a1 + 62) * v30;
      if ( v31 <= 0x40 )
      {
        *((_DWORD *)a1 + 556) = v31;
        goto LABEL_48;
      }
      v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v7, 0x2000LL, v4);
      v27[3] = a1;
      v27[4] = 64LL;
      v27[5] = *((unsigned int *)a1 + 62);
      v27[6] = *((unsigned int *)a1 + 427);
LABEL_110:
      WdLogEvent5_WdWarning(v27);
      return 3221225485LL;
    }
LABEL_109:
    v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v7, 0x2000LL, v4);
    v27[3] = a1;
    goto LABEL_110;
  }
LABEL_48:
  if ( *((_BYTE *)a1 + 2228)
    && *((int *)a1 + 492) >= 4608
    && (!*((_DWORD *)a1 + 540)
     || !*((_DWORD *)a1 + 541)
     || !*((_BYTE *)a1 + 2170)
     || (*((_DWORD *)a1 + 423) & 2) == 0
     || (*((_DWORD *)a1 + 75) & 0x10) == 0 && (v7 & 4) == 0) )
  {
    v29 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v29 + 24) = 746LL;
    goto LABEL_108;
  }
  v9 = *((unsigned int *)a1 + 492);
  if ( (int)v9 >= 0x2000 && (*((_DWORD *)a1 + 423) & 2) == 0 )
  {
    v29 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v29 + 24) = *((unsigned int *)a1 + 423);
    goto LABEL_108;
  }
  if ( (int)v9 >= 4864 && !a1[94] )
  {
    v29 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v29 + 24) = 766LL;
    goto LABEL_108;
  }
LABEL_53:
  v10 = (ADAPTER_RENDER *)operator new(0x4E0uLL, 0x4B677844u, 1, (POOL_TYPE)512);
  if ( v10 )
    v12 = ADAPTER_RENDER::ADAPTER_RENDER(v10, (struct DXGADAPTER *)a1);
  else
    v12 = 0LL;
  if ( v12 )
  {
    v15 = ADAPTER_RENDER::Initialize(v12);
    if ( v15 < 0 )
    {
      ADAPTER_RENDER::Destroy(v12);
      ADAPTER_RENDER::`scalar deleting destructor'(v12);
    }
    else
    {
      v18 = WdLogNewEntry5_WdEvent(v14, v13, v16, v17);
      *(_QWORD *)(v18 + 24) = v12;
      *(_QWORD *)(v18 + 32) = a1;
      WdLogEvent5_WdEvent(v18);
      *a2 = v12;
    }
    return (unsigned int)v15;
  }
  else
  {
    v32 = WdLogNewEntry5_WdLowResource(v11);
    *(_QWORD *)(v32 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v32);
    return 3221225495LL;
  }
}
