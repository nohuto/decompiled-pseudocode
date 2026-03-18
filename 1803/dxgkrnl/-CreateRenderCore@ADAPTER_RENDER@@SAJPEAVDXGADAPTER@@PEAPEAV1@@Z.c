/*
 * XREFs of ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C0158DB8
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C0149978 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000DC30 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0016070 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ??_GADAPTER_RENDER@@QEAAPEAXI@Z @ 0x1C00251D0 (--_GADAPTER_RENDER@@QEAAPEAXI@Z.c)
 *     ??0ADAPTER_RENDER@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C01586C0 (--0ADAPTER_RENDER@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01594B8 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C015A35C (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::CreateRenderCore(
        __int64 (__fastcall **a1)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *),
        struct ADAPTER_RENDER **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 (__fastcall *v8)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // r8
  __int64 (__fastcall *v9)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rax
  __int64 (__fastcall *v10)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rcx
  __int64 (__fastcall *v11)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  int v19; // eax
  int v20; // eax
  _QWORD *v21; // rax
  unsigned int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  ADAPTER_RENDER *v28; // rax
  __int64 v29; // rcx
  ADAPTER_RENDER *v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // esi
  __int64 v35; // rax

  if ( !a1 )
  {
    v6 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v6 + 24) = 489LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v7 + 24) = 490LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !*((_BYTE *)a1 + 185) )
  {
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
        v12 = WdLogNewEntry5_WdError(v25);
        *(_QWORD *)(v12 + 24) = 566LL;
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
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v25, v24, v26, v27) + 24) = 554LL;
          result = 0LL;
          *a2 = 0LL;
          return result;
        }
        v12 = WdLogNewEntry5_WdError(v25);
        *(_QWORD *)(v12 + 24) = 548LL;
      }
      goto LABEL_125;
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, a3, a4) + 24) = 518LL;
    v8 = a1[71];
    if ( !v8 )
    {
      a1[71] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
      v8 = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
    }
    v9 = a1[77];
    if ( !v9 )
    {
      a1[77] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
      v9 = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
    }
    v10 = a1[78];
    if ( !v10 )
    {
      a1[78] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
      v10 = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
    }
    v11 = a1[79];
    if ( !v11 )
    {
      a1[79] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
      v11 = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
    }
    if ( !a1[69] )
      a1[69] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
    if ( !a1[45] )
      a1[45] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
    if ( !a1[46] )
      a1[46] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
    if ( v8 == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
    {
      if ( v9 != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
        || v10 != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
        || v11 != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
      {
LABEL_41:
        v12 = WdLogNewEntry5_WdError(v10);
        *(_QWORD *)(v12 + 24) = 619LL;
LABEL_125:
        WdLogEvent5_WdError(v12);
        return 3221225561LL;
      }
    }
    else if ( v11 == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
           || v10 == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
           || v9 == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
    {
      goto LABEL_41;
    }
    v13 = *((unsigned int *)a1 + 526);
    if ( (((_DWORD)v13 - 4096) & 0xFFFFFCFF) == 0 && (_DWORD)v13 != 4352 && (!a1[41] || !a1[47] || !a1[75]) )
    {
      v12 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v12 + 24) = 639LL;
      goto LABEL_125;
    }
    v14 = *((unsigned int *)a1 + 455);
    if ( (v14 & 4) != 0 )
    {
      if ( !a1[83] )
      {
        v15 = WdLogNewEntry5_WdError(v13);
        *(_QWORD *)(v15 + 24) = 648LL;
LABEL_54:
        WdLogEvent5_WdError(v15);
        return 3221225485LL;
      }
      if ( (int)DXGADAPTER::GetDriverVersion((DXGADAPTER *)a1) < 1105 )
      {
        v18 = WdLogNewEntry5_WdWarning(v13, v17, v14);
        *(_QWORD *)(v18 + 24) = a1;
        WdLogEvent5_WdWarning(v18);
        *((_DWORD *)a1 + 455) &= ~4u;
        v14 = *((unsigned int *)a1 + 455);
        a1[83] = 0LL;
      }
      if ( (v14 & 0x20000000) != 0 )
      {
        v15 = WdLogNewEntry5_WdError(v13);
        *(_QWORD *)(v15 + 24) = 660LL;
        goto LABEL_54;
      }
    }
    if ( *((_DWORD *)a1 + 453) > 4u )
      *((_DWORD *)a1 + 453) = 4;
    if ( *((_DWORD *)a1 + 452)
      && (a1[45] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
       || a1[46] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange) )
    {
      v12 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v12 + 24) = 675LL;
      goto LABEL_125;
    }
    v19 = *((_DWORD *)a1 + 458);
    if ( (v19 & 1) != 0 )
    {
      if ( *((int *)a1 + 526) < 0x2000 )
      {
        v20 = *((_DWORD *)a1 + 461);
        if ( !v20 )
        {
LABEL_69:
          v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, 0x2000LL, v14);
          v21[3] = a1;
LABEL_70:
          WdLogEvent5_WdWarning(v21);
          return 3221225485LL;
        }
        v22 = *((_DWORD *)a1 + 62) * v20;
        if ( v22 > 0x40 )
        {
          v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, 0x2000LL, v14);
          v21[3] = a1;
          v21[4] = 64LL;
          v21[5] = *((unsigned int *)a1 + 62);
          v21[6] = *((unsigned int *)a1 + 461);
          goto LABEL_70;
        }
        *((_DWORD *)a1 + 592) = v22;
      }
    }
    else
    {
      if ( (v19 & 4) != 0 || (v19 & 0x10) != 0 )
        goto LABEL_69;
      *((_DWORD *)a1 + 461) = 1;
      *((_DWORD *)a1 + 592) = 1;
    }
    if ( *((_BYTE *)a1 + 2372)
      && *((int *)a1 + 526) >= 4608
      && (!*((_DWORD *)a1 + 574)
       || !*((_DWORD *)a1 + 575)
       || !*((_BYTE *)a1 + 2306)
       || (*((_DWORD *)a1 + 457) & 2) == 0
       || (*((_DWORD *)a1 + 75) & 0x10) == 0 && (*((_DWORD *)a1 + 455) & 4) == 0) )
    {
      v15 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v15 + 24) = 738LL;
      goto LABEL_54;
    }
    v23 = *((unsigned int *)a1 + 526);
    if ( (int)v23 >= 0x2000 && (*((_DWORD *)a1 + 457) & 2) == 0 )
    {
      v15 = WdLogNewEntry5_WdError(v23);
      *(_QWORD *)(v15 + 24) = *((unsigned int *)a1 + 457);
      goto LABEL_54;
    }
    if ( (int)v23 >= 4864 && !a1[94] )
    {
      v15 = WdLogNewEntry5_WdError(v23);
      *(_QWORD *)(v15 + 24) = 760LL;
      goto LABEL_54;
    }
    if ( (int)v23 >= 9216 && (*((_DWORD *)a1 + 459) & 0x800) != 0 && (!a1[151] || !a1[152]) )
    {
      v15 = WdLogNewEntry5_WdError(v23);
      *(_QWORD *)(v15 + 24) = 775LL;
      goto LABEL_54;
    }
  }
  v28 = (ADAPTER_RENDER *)operator new(0x600uLL, 0x4B677844u, 1, (POOL_TYPE)512);
  if ( v28 )
    v30 = ADAPTER_RENDER::ADAPTER_RENDER(v28, (struct DXGADAPTER *)a1);
  else
    v30 = 0LL;
  if ( v30 )
  {
    v34 = ADAPTER_RENDER::Initialize(v30);
    if ( v34 >= 0 )
    {
      v35 = WdLogNewEntry5_WdEvent(v33, v32);
      *(_QWORD *)(v35 + 24) = v30;
      *(_QWORD *)(v35 + 32) = a1;
      WdLogEvent5_WdEvent(v35);
      *a2 = v30;
    }
    else
    {
      ADAPTER_RENDER::Destroy(v30);
      ADAPTER_RENDER::`scalar deleting destructor'(v30);
    }
    return (unsigned int)v34;
  }
  else
  {
    v31 = WdLogNewEntry5_WdLowResource(v29);
    *(_QWORD *)(v31 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v31);
    return 3221225495LL;
  }
}
