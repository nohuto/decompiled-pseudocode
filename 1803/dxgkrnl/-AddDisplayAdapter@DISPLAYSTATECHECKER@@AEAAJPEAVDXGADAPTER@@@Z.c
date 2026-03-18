/*
 * XREFs of ?AddDisplayAdapter@DISPLAYSTATECHECKER@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C01EA288
 * Callers:
 *     ?CollectDisplayAdaptersCallback@DISPLAYSTATECHECKER@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01EAB80 (-CollectDisplayAdaptersCallback@DISPLAYSTATECHECKER@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0014A60 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Ensure@?$CDynamicArray@VVIDPNSOURCEINFO@@$07@@QEAAPEAVVIDPNSOURCEINFO@@K@Z @ 0x1C00388D0 (-Ensure@-$CDynamicArray@VVIDPNSOURCEINFO@@$07@@QEAAPEAVVIDPNSOURCEINFO@@K@Z.c)
 *     ?Initialize@VIDPNSOURCEINFO@@QEAAJPEAVDXGADAPTER@@I@Z @ 0x1C01EAC58 (-Initialize@VIDPNSOURCEINFO@@QEAAJPEAVDXGADAPTER@@I@Z.c)
 */

__int64 __fastcall DISPLAYSTATECHECKER::AddDisplayAdapter(DISPLAYSTATECHECKER *this, struct DXGADAPTER *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rbp
  unsigned int v6; // edi
  unsigned int v7; // esi
  VIDPNSOURCEINFO *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  _BYTE v12[8]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v13[32]; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v14[40]; // [rsp+48h] [rbp-40h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v12, a2, 0LL);
  v4 = 0;
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v12) >= 0 )
  {
    v5 = *((_QWORD *)a2 + 307);
    v6 = 0;
    v7 = *(_DWORD *)(v5 + 80);
    if ( v7 )
    {
      do
      {
        if ( ADAPTER_DISPLAY::IsPartOfDesktop((DXGADAPTER **)v5, v6) == 1 )
        {
          v8 = CDynamicArray<VIDPNSOURCEINFO,8>::Ensure((__int64)this, *((_DWORD *)this + 116) + 1);
          if ( !v8 )
          {
            v10 = WdLogNewEntry5_WdError(v9);
            *(_QWORD *)(v10 + 24) = 137LL;
            WdLogEvent5_WdError(v10);
            v4 = -1073741801;
            break;
          }
          VIDPNSOURCEINFO::Initialize((VIDPNSOURCEINFO *)((char *)v8 + 56 * *((unsigned int *)this + 116)), a2, v6);
          ++*((_DWORD *)this + 116);
        }
        ++v6;
      }
      while ( v6 < v7 );
    }
  }
  COREACCESS::~COREACCESS((COREACCESS *)v14);
  COREACCESS::~COREACCESS((COREACCESS *)v13);
  return v4;
}
