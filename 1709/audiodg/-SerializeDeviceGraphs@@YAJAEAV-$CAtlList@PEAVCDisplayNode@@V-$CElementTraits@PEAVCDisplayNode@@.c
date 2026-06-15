/*
 * XREFs of ?SerializeDeviceGraphs@@YAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@PEAPEAEPEAI@Z @ 0x14004420C
 * Callers:
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x1400055C0 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 * Callees:
 *     ??_U@YAPEAX_K@Z @ 0x14001C8D4 (--_U@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D298 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_s @ 0x140034390 (memcpy_s.c)
 *     ?GetNext@?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAAEAPEAVCDisplayNode@@AEAPEAU__POSITION@@@Z @ 0x140043CD8 (-GetNext@-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?Serialize@CDisplayNode@@QEAAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAPEAEAEAI@Z @ 0x140044078 (-Serialize@CDisplayNode@@QEAAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNod.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SerializeDeviceGraphs(__int64 a1, _QWORD *a2, int *a3)
{
  _DWORD *v6; // rbx
  int v7; // edi
  __int64 v8; // rcx
  int v9; // edx
  __int64 *Next; // rax
  _DWORD *v11; // rcx
  _QWORD *v13; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v14[6]; // [rsp+28h] [rbp-30h] BYREF
  int Source; // [rsp+78h] [rbp+20h] BYREF

  v14[1] = -2LL;
  v6 = operator new[](0x1000uLL);
  v14[2] = v6;
  v14[0] = v6;
  if ( v6 )
  {
    v7 = 0;
    Source = *(_QWORD *)(a1 + 16);
    if ( memcpy_s(v6 + 1, 0xFFCuLL, &Source, 4uLL) )
    {
      v7 = -2147024774;
    }
    else
    {
      v9 = 8;
      Source = 8;
      v13 = *(_QWORD **)a1;
      if ( v13 )
      {
        while ( 1 )
        {
          Next = ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::GetNext(v8, &v13);
          v7 = CDisplayNode::Serialize(*Next, a1, v14, &Source);
          if ( v7 < 0 )
            break;
          if ( !v13 )
          {
            v9 = Source;
            goto LABEL_8;
          }
        }
      }
      else
      {
LABEL_8:
        *v6 = v9;
        v11 = v6;
        v6 = 0LL;
        *a2 = v11;
        *a3 = v9;
      }
    }
  }
  else
  {
    v7 = -2147024882;
  }
  operator delete(v6);
  return (unsigned int)v7;
}
