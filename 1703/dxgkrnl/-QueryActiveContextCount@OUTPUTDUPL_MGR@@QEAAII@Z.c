/*
 * XREFs of ?QueryActiveContextCount@OUTPUTDUPL_MGR@@QEAAII@Z @ 0x1C0101040
 * Callers:
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01010E4 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PE.c)
 *     ?ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z @ 0x1C01AE93C (-ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::QueryActiveContextCount(
        OUTPUTDUPL_MGR *this,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r9
  unsigned int v11; // eax
  unsigned int v12; // esi
  _QWORD *v13; // r8
  unsigned int v14; // ecx
  _BYTE v17[24]; // [rsp+20h] [rbp-18h] BYREF

  v5 = a2;
  v6 = *(_QWORD *)this;
  if ( v6 )
    DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v6 + 16));
  v7 = 3 * v5;
  v8 = *((_QWORD *)this + 2);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, *(struct DXGFASTMUTEX *const *)(v8 + 8 * v7), a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
  v11 = *((_DWORD *)this + 2);
  v12 = 0;
  v13 = *(_QWORD **)(v8 + 8 * v7 + 8);
  if ( v11 )
  {
    v9 = v11;
    do
    {
      v14 = v12 + 1;
      if ( *v13++ == 0LL )
        v14 = v12;
      v12 = v14;
      --v9;
    }
    while ( v9 );
  }
  if ( v17[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17, v9, (__int64)v13, v10);
  return v12;
}
