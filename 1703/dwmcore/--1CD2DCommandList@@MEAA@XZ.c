/*
 * XREFs of ??1CD2DCommandList@@MEAA@XZ @ 0x1800AF8EC
 * Callers:
 *     ??_GCD2DCommandList@@MEAAPEAXI@Z @ 0x1800AF810 (--_GCD2DCommandList@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall CD2DCommandList::~CD2DCommandList(CD2DCommandList *this)
{
  int v1; // esi
  __int64 v3; // rdi
  void *v4; // rcx
  void *v5; // rcx

  v1 = 0;
  *(_QWORD *)this = &CD2DCommandList::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CSecondaryD2DBitmap::`vftable'{for `IDeviceResource'};
  if ( *((int *)this + 30) > 0 )
  {
    v3 = 0LL;
    do
    {
      ReleaseInterfaceNoNULL<CD2DPencil>(*(_QWORD *)(v3 + *((_QWORD *)this + 14)));
      ++v1;
      v3 += 8LL;
    }
    while ( v1 < *((_DWORD *)this + 30) );
  }
  v4 = (void *)*((_QWORD *)this + 13);
  if ( v4 )
  {
    WPF::ProcessHeapImpl::Free(v4);
    *((_QWORD *)this + 13) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 14);
  if ( v5 )
  {
    WPF::ProcessHeapImpl::Free(v5);
    *((_QWORD *)this + 14) = 0LL;
  }
  *((_DWORD *)this + 30) = 0;
  CD2DResource::~CD2DResource(this);
}
