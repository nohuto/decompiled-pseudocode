/*
 * XREFs of ?QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z @ 0x1C017F070
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C008E700 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C008450C (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 */

__int64 __fastcall QueryDriverCapsExt(struct DXGADAPTER *this, struct _D3DKMT_DRIVERCAPS_EXT *a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // rcx
  unsigned int v11; // edi
  __int64 v12; // rax
  struct _DXGKARG_QUERYADAPTERINFO v14; // [rsp+28h] [rbp-29h] BYREF
  char v15[8]; // [rsp+58h] [rbp+7h] BYREF
  char v16[32]; // [rsp+60h] [rbp+Fh] BYREF
  char v17[40]; // [rsp+80h] [rbp+2Fh] BYREF
  unsigned int v18; // [rsp+B8h] [rbp+67h] BYREF

  v2 = 0;
  if ( !this || !a2 )
    return 3221225485LL;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v15, this, 0LL);
  v5 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v15);
  if ( v5 >= 0 )
  {
    memset(&v14, 0, 0x28uLL);
    v14.Type = DXGKQAITYPE_DISPLAY_DRIVERCAPS_EXTENSION;
    v18 = 0;
    v14.pInputData = 0LL;
    v14.pOutputData = &v18;
    v14.InputDataSize = 0;
    v14.OutputDataSize = 4;
    v11 = DXGADAPTER::DdiQueryAdapterInfo(this, &v14, v9);
    if ( v11 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v10);
      *(_QWORD *)(v12 + 24) = 1829LL;
      WdLogEvent5_WdAssertion(v12);
    }
    v2 = v11;
    a2->Value ^= (a2->Value ^ (v18 >> 1)) & 1;
  }
  else if ( v5 == -1073741130 )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6);
    v8[3] = this;
    v8[4] = *((int *)this + 68);
    v8[5] = *((unsigned int *)this + 67);
  }
  else
  {
    v2 = v5;
  }
  COREACCESS::~COREACCESS((COREACCESS *)v17);
  COREACCESS::~COREACCESS((COREACCESS *)v16);
  return v2;
}
