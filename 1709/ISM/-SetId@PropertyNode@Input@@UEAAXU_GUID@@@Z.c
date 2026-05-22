/*
 * XREFs of ?SetId@PropertyNode@Input@@UEAAXU_GUID@@@Z @ 0x180030EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDefinition@PropertyNode@Input@@AEAAJXZ @ 0x180030F18 (-GetDefinition@PropertyNode@Input@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Input::PropertyNode::SetId(Input::PropertyNode *this, struct _GUID *a2)
{
  if ( *((_QWORD *)this + 1) != *(_QWORD *)&a2->Data1 || *((_QWORD *)this + 2) != *(_QWORD *)a2->Data4 )
  {
    (*(void (__fastcall **)(Input::PropertyNode *))(*(_QWORD *)this + 64LL))(this);
    *(struct _GUID *)((char *)this + 8) = *a2;
    Input::PropertyNode::GetDefinition(this);
  }
}
