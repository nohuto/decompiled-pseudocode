/*
 * XREFs of ??1AttachedInputObjectEntry@InputSite@@QEAA@XZ @ 0x18000C954
 * Callers:
 *     _InputSiteManager::GetInputSiteFromInputSinkHandle_::_1_::dtor$3 @ 0x1800E3AC2 (_InputSiteManager--GetInputSiteFromInputSinkHandle_--_1_--dtor$3.c)
 *     _InputSiteElementProxy::OnDragSourceClientChanged_::_1_::dtor$30 @ 0x1800E3D1B (_InputSiteElementProxy--OnDragSourceClientChanged_--_1_--dtor$30.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall InputSite::AttachedInputObjectEntry::~AttachedInputObjectEntry(
        InputSite::AttachedInputObjectEntry *this)
{
  void (__fastcall ***v1)(char *); // rbx
  char *v2; // rcx

  v1 = (void (__fastcall ***)(char *))((char *)this + 8);
  if ( (*((_DWORD *)this + 16) & 3) == 1LL )
  {
    v2 = (char *)*((_QWORD *)this + 6);
    goto LABEL_5;
  }
  if ( (*((_DWORD *)this + 16) & 3) == 2LL )
  {
    v2 = (char *)this + 8;
LABEL_5:
    (*v1[6])(v2);
  }
  v1[7] = 0LL;
}
