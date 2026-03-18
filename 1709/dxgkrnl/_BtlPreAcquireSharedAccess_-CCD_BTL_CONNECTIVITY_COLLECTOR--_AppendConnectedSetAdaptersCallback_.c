/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_CONNECTIVITY_COLLECTOR::_AppendConnectedSetAdaptersCallback_1_ @ 0x1C00B5DA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0002870 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x1C002E870 (DxgkIsMSBDDFallbackEnabled.c)
 *     ?DmmAppendCcdConnectedSetForAdapter@@YAJQEAXPEAU_UNICODE_STRING@@@Z @ 0x1C00D92D4 (-DmmAppendCcdConnectedSetForAdapter@@YAJQEAXPEAU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__CCD_BTL_CONNECTIVITY_COLLECTOR::_AppendConnectedSetAdaptersCallback_1_(
        DXGADAPTER *this,
        __int64 a2)
{
  unsigned int v2; // ebx
  int appended; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  void *v10; // rcx
  _BYTE v11[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v12[8]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v13; // [rsp+30h] [rbp-48h]
  DXGADAPTER *v14; // [rsp+38h] [rbp-40h]
  char v15; // [rsp+40h] [rbp-38h]
  _BYTE v16[8]; // [rsp+48h] [rbp-30h] BYREF
  __int64 v17; // [rsp+50h] [rbp-28h]
  DXGADAPTER *v18; // [rsp+58h] [rbp-20h]
  char v19; // [rsp+60h] [rbp-18h]

  v2 = 0;
  v14 = this;
  v15 = 0;
  if ( this )
  {
    _InterlockedIncrement64((volatile signed __int64 *)this + 3);
    v13 = -1LL;
  }
  v18 = this;
  v19 = 0;
  if ( this )
  {
    _InterlockedIncrement64((volatile signed __int64 *)this + 3);
    v17 = -1LL;
  }
  appended = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v11);
  if ( appended < 0 )
  {
    if ( appended == -1073741130 )
    {
      v8 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6);
      v8[3] = this;
      v8[4] = *((int *)this + 68);
      v8[5] = *((unsigned int *)this + 67);
      v8[6] = a2;
      goto LABEL_8;
    }
LABEL_12:
    v2 = appended;
    goto LABEL_8;
  }
  if ( !*((_BYTE *)this + 2229) && (!DXGADAPTER::IsBddFallbackDriver(this) || DxgkIsMSBDDFallbackEnabled()) )
  {
    appended = DmmAppendCcdConnectedSetForAdapter(v10, (struct _UNICODE_STRING *)(a2 + 8));
    goto LABEL_12;
  }
LABEL_8:
  COREACCESS::~COREACCESS((COREACCESS *)v16);
  COREACCESS::~COREACCESS((COREACCESS *)v12);
  return v2;
}
