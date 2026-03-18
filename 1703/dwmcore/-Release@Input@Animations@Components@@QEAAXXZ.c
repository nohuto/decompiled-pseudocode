/*
 * XREFs of ?Release@Input@Animations@Components@@QEAAXXZ @ 0x18002AB60
 * Callers:
 *     _dynamic_atexit_destructor_for__Components::Animations::Sequence::s_rpDefaultValue__ @ 0x1800D6E20 (_dynamic_atexit_destructor_for__Components--Animations--Sequence--s_rpDefaultValue__.c)
 * Callees:
 *     <none>
 */

void __fastcall Components::Animations::Input::Release(Components::Animations::Input *this)
{
  if ( (*((_DWORD *)this + 2))-- == 1 )
    (*(void (__fastcall **)(Components::Animations::Input *))(*(_QWORD *)this + 48LL))(this);
}
