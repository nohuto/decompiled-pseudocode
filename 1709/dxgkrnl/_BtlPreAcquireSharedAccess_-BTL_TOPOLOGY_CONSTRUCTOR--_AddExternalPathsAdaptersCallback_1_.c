/*
 * XREFs of _BtlPreAcquireSharedAccess_&BTL_TOPOLOGY_CONSTRUCTOR::_AddExternalPathsAdaptersCallback_1_ @ 0x1C01F9340
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0002870 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x1C002E870 (DxgkIsMSBDDFallbackEnabled.c)
 *     ?_AddExternalPathsAdaptersCallback@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01F9C54 (-_AddExternalPathsAdaptersCallback@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__BTL_TOPOLOGY_CONSTRUCTOR::_AddExternalPathsAdaptersCallback_1_(
        struct DXGADAPTER *a1,
        BTL_TOPOLOGY_CONSTRUCTOR *this)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  _QWORD *v8; // rax
  struct DXGADAPTER *v9; // rcx
  _BYTE v11[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v12[32]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v13[40]; // [rsp+48h] [rbp-30h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v11, a1, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v11);
  v7 = 0;
  if ( v4 < 0 )
  {
    if ( v4 == -1073741130 )
    {
      v8 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5);
      v8[3] = a1;
      v8[4] = *((int *)a1 + 68);
      v8[5] = *((unsigned int *)a1 + 67);
      v8[6] = this;
      goto LABEL_9;
    }
LABEL_8:
    v7 = v4;
    goto LABEL_9;
  }
  if ( !*((_BYTE *)a1 + 2229) && (!DXGADAPTER::IsBddFallbackDriver(a1) || DxgkIsMSBDDFallbackEnabled()) )
  {
    v4 = BTL_TOPOLOGY_CONSTRUCTOR::_AddExternalPathsAdaptersCallback(v9, this);
    goto LABEL_8;
  }
LABEL_9:
  COREACCESS::~COREACCESS((COREACCESS *)v13);
  COREACCESS::~COREACCESS((COREACCESS *)v12);
  return v7;
}
