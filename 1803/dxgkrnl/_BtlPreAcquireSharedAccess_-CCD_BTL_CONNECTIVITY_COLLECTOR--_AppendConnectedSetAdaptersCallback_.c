/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_CONNECTIVITY_COLLECTOR::_AppendConnectedSetAdaptersCallback_1_ @ 0x1C00AD050
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C00161A0 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x1C003C950 (DxgkIsMSBDDFallbackEnabled.c)
 *     ?DmmAppendCcdConnectedSetForAdapter@@YAJQEAXPEAU_UNICODE_STRING@@@Z @ 0x1C00ADB4C (-DmmAppendCcdConnectedSetForAdapter@@YAJQEAXPEAU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__CCD_BTL_CONNECTIVITY_COLLECTOR::_AppendConnectedSetAdaptersCallback_1_(
        DXGADAPTER *this,
        __int64 a2)
{
  int appended; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  _QWORD *v10; // rax
  void *v12; // rcx
  _BYTE v13[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v14[32]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v15[40]; // [rsp+48h] [rbp-30h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v13, this, 0LL);
  appended = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v13);
  v9 = 0;
  if ( appended < 0 )
  {
    if ( appended == -1073741130 )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
      v10[3] = this;
      v10[4] = *((int *)this + 68);
      v10[5] = *((unsigned int *)this + 67);
      v10[6] = a2;
      goto LABEL_4;
    }
LABEL_8:
    v9 = appended;
    goto LABEL_4;
  }
  if ( !*((_BYTE *)this + 2373) && (!DXGADAPTER::IsBddFallbackDriver(this) || DxgkIsMSBDDFallbackEnabled()) )
  {
    appended = DmmAppendCcdConnectedSetForAdapter(v12, (struct _UNICODE_STRING *)(a2 + 8));
    goto LABEL_8;
  }
LABEL_4:
  COREACCESS::~COREACCESS((COREACCESS *)v15);
  COREACCESS::~COREACCESS((COREACCESS *)v14);
  return v9;
}
