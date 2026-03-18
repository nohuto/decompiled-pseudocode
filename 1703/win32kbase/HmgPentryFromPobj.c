/*
 * XREFs of HmgPentryFromPobj @ 0x1C0030630
 * Callers:
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C002BD78 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0031560 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C003E9E0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C003F66C (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     GreSelectBrushInternal @ 0x1C009F940 (GreSelectBrushInternal.c)
 *     GreSelectPenInternal @ 0x1C009F9C0 (GreSelectPenInternal.c)
 *     GreRestoreDCInternal @ 0x1C00A0C40 (GreRestoreDCInternal.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0033280 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

__int64 __fastcall HmgPentryFromPobj(_DWORD *a1)
{
  GdiHandleManager *v2; // rdi
  unsigned int v3; // eax
  __int64 v4; // rbx
  unsigned int v5; // r8d
  unsigned int v6; // edx
  signed int v7; // ecx
  __int64 v8; // r9
  __int64 v9; // r14
  unsigned int v10; // eax
  unsigned int v11; // r8d
  unsigned __int64 v12; // rdx
  signed int v13; // ecx
  __int64 v14; // rax
  _DWORD *v15; // rdx

  v2 = gpHandleManager;
  v3 = GdiHandleManager::DecodeIndex(gpHandleManager, (unsigned __int16)*a1 | (*a1 >> 8) & 0xFF0000);
  v4 = *((_QWORD *)v2 + 2);
  v5 = v3;
  v6 = *(_DWORD *)(v4 + 2056);
  if ( v3 >= v6 + ((*(unsigned __int16 *)(v4 + 2) + 0xFFFF) << 16) )
    goto LABEL_21;
  if ( v3 >= v6 )
  {
    v7 = ((v3 - v6) >> 16) + 1;
    if ( (v3 - v6) >> 16 != -2 )
      goto LABEL_4;
LABEL_21:
    v9 = 0LL;
    goto LABEL_9;
  }
  v7 = 0;
LABEL_4:
  v8 = *(_QWORD *)(v4 + 8LL * v7 + 8);
  if ( v7 )
    v3 = v3 - (v7 << 16) - v6 + 0x10000;
  v9 = 0LL;
  if ( v3 < *(_DWORD *)(v8 + 20)
    && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v8 + 24) + 8 * ((unsigned __int64)v3 >> 8)) + 16LL * (unsigned __int8)v3 + 8) )
  {
    v9 = *(_QWORD *)v8 + 24LL * v3;
  }
LABEL_9:
  v10 = GdiHandleManager::DecodeIndex(v2, v5);
  v11 = *(_DWORD *)(v4 + 2056);
  v12 = v10;
  if ( v10 < v11 + ((*(unsigned __int16 *)(v4 + 2) + 0xFFFF) << 16) )
  {
    if ( v10 >= v11 )
    {
      v13 = ((v10 - v11) >> 16) + 1;
      if ( (v10 - v11) >> 16 == -2 )
        goto LABEL_19;
    }
    else
    {
      v13 = 0;
    }
    v14 = *(_QWORD *)(v4 + 8LL * v13 + 8);
    if ( v13 )
      v12 = (_DWORD)v12 - (v13 << 16) - v11 + 0x10000;
    if ( (unsigned int)v12 < *(_DWORD *)(v14 + 20) )
    {
      v15 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v14 + 24) + 8 * (v12 >> 8)) + 16LL * (unsigned __int8)v12 + 8);
      goto LABEL_16;
    }
  }
LABEL_19:
  v15 = 0LL;
LABEL_16:
  if ( v15 != a1 )
    return 0LL;
  return v9;
}
