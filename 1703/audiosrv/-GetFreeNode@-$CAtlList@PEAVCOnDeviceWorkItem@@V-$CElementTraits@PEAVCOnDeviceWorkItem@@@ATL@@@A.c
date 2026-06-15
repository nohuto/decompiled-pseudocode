/*
 * XREFs of ?GetFreeNode@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@AEAAXXZ @ 0x180024108
 * Callers:
 *     ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGU_tagpropertykey@@@Z @ 0x180023F38 (-QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGU_tagpropertykey@@@Z.c)
 *     ?AddTail@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCOnDeviceWorkItem@@@Z @ 0x18007C0DC (-AddTail@-$CAtlList@PEAVCOnDeviceWorkItem@@V-$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::GetFreeNode(__int64 a1)
{
  unsigned __int64 v2; // rcx
  _QWORD *v3; // rax
  _QWORD *v4; // r8
  int v5; // edx
  _QWORD *i; // rcx

  if ( !*(_QWORD *)(a1 + 32) )
  {
    v2 = *(unsigned int *)(a1 + 40);
    if ( v2 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v2 < 0x18 )
        goto LABEL_14;
      v2 *= 24LL;
    }
    if ( ~v2 >= 8 )
    {
      v3 = malloc(v2 + 8);
      v4 = v3;
      if ( !v3 )
        goto LABEL_15;
      *v3 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 24) = v3;
LABEL_8:
      if ( v4 )
      {
        v5 = *(_DWORD *)(a1 + 40);
        for ( i = &v4[2 * (v5 - 1) + 1 + (unsigned int)(v5 - 1)]; --v5 >= 0; i -= 3 )
        {
          *i = *(_QWORD *)(a1 + 32);
          *(_QWORD *)(a1 + 32) = i;
        }
        return;
      }
LABEL_15:
      ATL::AtlThrowImpl(-2147024882);
    }
LABEL_14:
    v4 = 0LL;
    goto LABEL_8;
  }
}
