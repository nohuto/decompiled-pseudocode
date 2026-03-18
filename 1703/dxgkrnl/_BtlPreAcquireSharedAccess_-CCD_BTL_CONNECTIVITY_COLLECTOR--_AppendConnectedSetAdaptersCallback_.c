/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_CONNECTIVITY_COLLECTOR::_AppendConnectedSetAdaptersCallback_1_ @ 0x1C009F490
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0006310 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x1C003DCE8 (DxgkIsMSBDDFallbackEnabled.c)
 *     DmmAppendCcdConnectedSetForAdapter @ 0x1C00AF490 (DmmAppendCcdConnectedSetForAdapter.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__CCD_BTL_CONNECTIVITY_COLLECTOR::_AppendConnectedSetAdaptersCallback_1_(
        DXGADAPTER *this,
        __int64 a2)
{
  unsigned int v2; // ebx
  int appended; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  __int64 v12; // rcx
  _BYTE v13[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v14[8]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v15; // [rsp+30h] [rbp-48h]
  DXGADAPTER *v16; // [rsp+38h] [rbp-40h]
  char v17; // [rsp+40h] [rbp-38h]
  _BYTE v18[8]; // [rsp+48h] [rbp-30h] BYREF
  __int64 v19; // [rsp+50h] [rbp-28h]
  DXGADAPTER *v20; // [rsp+58h] [rbp-20h]
  char v21; // [rsp+60h] [rbp-18h]

  v2 = 0;
  v16 = this;
  v17 = 0;
  if ( this )
  {
    _InterlockedIncrement64((volatile signed __int64 *)this + 3);
    v15 = -1LL;
  }
  v20 = this;
  v21 = 0;
  if ( this )
  {
    _InterlockedIncrement64((volatile signed __int64 *)this + 3);
    v19 = -1LL;
  }
  appended = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v13);
  if ( appended < 0 )
  {
    if ( appended == -1073741130 )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
      v10[3] = this;
      v10[4] = *((int *)this + 68);
      v10[5] = *((unsigned int *)this + 67);
      v10[6] = a2;
      goto LABEL_8;
    }
LABEL_12:
    v2 = appended;
    goto LABEL_8;
  }
  if ( !*((_BYTE *)this + 2205) && (!DXGADAPTER::IsBddFallbackDriver(this) || DxgkIsMSBDDFallbackEnabled()) )
  {
    appended = DmmAppendCcdConnectedSetForAdapter(v12, a2 + 8);
    goto LABEL_12;
  }
LABEL_8:
  COREACCESS::~COREACCESS((COREACCESS *)v18);
  COREACCESS::~COREACCESS((COREACCESS *)v14);
  return v2;
}
