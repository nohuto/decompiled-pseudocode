/*
 * XREFs of ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C0120958
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C010C924 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C00061DC (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ??_GADAPTER_RENDER@@QEAAPEAXI@Z @ 0x1C0021510 (--_GADAPTER_RENDER@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00A5924 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C010A22C (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ??0ADAPTER_RENDER@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C010A9A0 (--0ADAPTER_RENDER@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01735BC (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::CreateRenderCore(
        __int64 (__fastcall **a1)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *),
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  struct ADAPTER_RENDER **v4; // r14
  __int64 v6; // rax
  __int64 (__fastcall *v7)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rdx
  __int64 (__fastcall *v8)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // r8
  __int64 (__fastcall *v9)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // r9
  __int64 (__fastcall *v10)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  ADAPTER_RENDER *v16; // rax
  __int64 v17; // rcx
  ADAPTER_RENDER *v18; // rdi
  __int64 v19; // rcx
  int v20; // esi
  __int64 v21; // rax
  __int64 result; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rax
  int v33; // eax
  unsigned int v34; // eax
  __int64 v35; // rax

  v4 = (struct ADAPTER_RENDER **)a2;
  if ( !a1 )
  {
    v28 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    *(_QWORD *)(v28 + 24) = 486LL;
    WdLogEvent5_WdAssertion(v28);
  }
  if ( !v4 )
  {
    v29 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v29 + 24) = 487LL;
    WdLogEvent5_WdAssertion(v29);
  }
  if ( *((_BYTE *)a1 + 186) )
    goto LABEL_59;
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
      v27 = WdLogNewEntry5_WdError(v24, v23);
      *(_QWORD *)(v27 + 24) = 563LL;
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
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v24, v23, v25, v26) + 24) = 551LL;
        result = 0LL;
        *v4 = 0LL;
        return result;
      }
      v27 = WdLogNewEntry5_WdError(v24, v23);
      *(_QWORD *)(v27 + 24) = 545LL;
    }
    goto LABEL_130;
  }
  v6 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v7 = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  *(_QWORD *)(v6 + 24) = 515LL;
  if ( !a1[71] )
    a1[71] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  if ( !a1[77] )
    a1[77] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  v8 = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  if ( !a1[78] )
    a1[78] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  v9 = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  if ( !a1[79] )
    a1[79] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  if ( !a1[69] )
    a1[69] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  if ( !a1[45] )
    a1[45] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  if ( !a1[46] )
    a1[46] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  v10 = a1[71];
  if ( v10 != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
  {
LABEL_65:
    if ( a1[79] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
      && a1[78] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
      && a1[77] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
    {
      goto LABEL_41;
    }
LABEL_100:
    v27 = WdLogNewEntry5_WdError(
            ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange,
            ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange);
    *(_QWORD *)(v27 + 24) = 616LL;
LABEL_130:
    WdLogEvent5_WdError(v27);
    return 3221225561LL;
  }
  if ( a1[77] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || a1[78] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || a1[79] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
  {
    if ( v10 == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
      goto LABEL_100;
    goto LABEL_65;
  }
LABEL_41:
  v11 = *((unsigned int *)a1 + 486);
  if ( (((_DWORD)v11 - 4096) & 0xFFFFFCFF) == 0 && (_DWORD)v11 != 4352 && (!a1[41] || !a1[47] || !a1[75]) )
  {
    v27 = WdLogNewEntry5_WdError(v11, ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange);
    *(_QWORD *)(v27 + 24) = 636LL;
    goto LABEL_130;
  }
  v12 = *((unsigned int *)a1 + 415);
  if ( (v12 & 4) != 0 )
  {
    if ( !a1[83] )
    {
      v30 = WdLogNewEntry5_WdError(v12, ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange);
      *(_QWORD *)(v30 + 24) = 645LL;
LABEL_107:
      WdLogEvent5_WdError(v30);
      return 3221225485LL;
    }
    if ( (int)DXGADAPTER::GetDriverVersion((DXGADAPTER *)a1) < 1105 )
    {
      v32 = WdLogNewEntry5_WdWarning(v13, v7, v8, v9);
      *(_QWORD *)(v32 + 24) = a1;
      WdLogEvent5_WdWarning(v32);
      *((_DWORD *)a1 + 415) &= ~4u;
      a1[83] = 0LL;
    }
    v12 = *((unsigned int *)a1 + 415);
    if ( (v12 & 0x20000000) != 0 )
    {
      v30 = WdLogNewEntry5_WdError(v12, v7);
      *(_QWORD *)(v30 + 24) = 657LL;
      goto LABEL_107;
    }
  }
  if ( *((_DWORD *)a1 + 413) > 4u )
    *((_DWORD *)a1 + 413) = 4;
  if ( *((_DWORD *)a1 + 412)
    && (a1[45] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
     || a1[46] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange) )
  {
    v27 = WdLogNewEntry5_WdError(v12, v7);
    *(_QWORD *)(v27 + 24) = 672LL;
    goto LABEL_130;
  }
  v14 = *((_DWORD *)a1 + 418);
  a2 = 0x2000LL;
  if ( (v14 & 1) == 0 )
  {
    if ( (v14 & 4) == 0 && (v14 & 0x10) == 0 )
    {
      *((_DWORD *)a1 + 421) = 1;
      *((_DWORD *)a1 + 550) = 1;
      goto LABEL_54;
    }
    goto LABEL_108;
  }
  if ( *((int *)a1 + 486) < 0x2000 )
  {
    v33 = *((_DWORD *)a1 + 421);
    if ( v33 )
    {
      v34 = *((_DWORD *)a1 + 62) * v33;
      if ( v34 <= 0x40 )
      {
        *((_DWORD *)a1 + 550) = v34;
        goto LABEL_54;
      }
      v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, 0x2000LL, v8, v9);
      v31[3] = a1;
      v31[4] = 64LL;
      v31[5] = *((unsigned int *)a1 + 62);
      v31[6] = *((unsigned int *)a1 + 421);
LABEL_109:
      WdLogEvent5_WdWarning(v31);
      return 3221225485LL;
    }
LABEL_108:
    v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, 0x2000LL, v8, v9);
    v31[3] = a1;
    goto LABEL_109;
  }
LABEL_54:
  if ( *((_BYTE *)a1 + 2204)
    && *((int *)a1 + 486) >= 4608
    && (!*((_DWORD *)a1 + 534)
     || !*((_DWORD *)a1 + 535)
     || !*((_BYTE *)a1 + 2146)
     || (*((_DWORD *)a1 + 417) & 2) == 0
     || (*((_DWORD *)a1 + 75) & 0x10) == 0 && (v12 & 4) == 0) )
  {
    v30 = WdLogNewEntry5_WdError(v12, 0x2000LL);
    *(_QWORD *)(v30 + 24) = 735LL;
    goto LABEL_107;
  }
  v15 = *((unsigned int *)a1 + 486);
  if ( (int)v15 >= 0x2000 && (*((_DWORD *)a1 + 417) & 2) == 0 )
  {
    v30 = WdLogNewEntry5_WdError(v15, 0x2000LL);
    *(_QWORD *)(v30 + 24) = *((unsigned int *)a1 + 417);
    goto LABEL_107;
  }
  if ( (int)v15 >= 4864 && !a1[94] )
  {
    v30 = WdLogNewEntry5_WdError(v15, 0x2000LL);
    *(_QWORD *)(v30 + 24) = 755LL;
    goto LABEL_107;
  }
LABEL_59:
  v16 = (ADAPTER_RENDER *)operator new(0x490uLL, a2, 1, (POOL_TYPE)512);
  if ( v16 )
    v18 = ADAPTER_RENDER::ADAPTER_RENDER(v16, (struct DXGADAPTER *)a1);
  else
    v18 = 0LL;
  if ( v18 )
  {
    v20 = ADAPTER_RENDER::Initialize(v18);
    if ( v20 < 0 )
    {
      ADAPTER_RENDER::Destroy(v18);
      ADAPTER_RENDER::`scalar deleting destructor'(v18);
    }
    else
    {
      v21 = WdLogNewEntry5_WdEvent(v19);
      *(_QWORD *)(v21 + 24) = v18;
      *(_QWORD *)(v21 + 32) = a1;
      WdLogEvent5_WdEvent(v21);
      *v4 = v18;
    }
    return (unsigned int)v20;
  }
  else
  {
    v35 = WdLogNewEntry5_WdLowResource(v17);
    *(_QWORD *)(v35 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v35);
    return 3221225495LL;
  }
}
