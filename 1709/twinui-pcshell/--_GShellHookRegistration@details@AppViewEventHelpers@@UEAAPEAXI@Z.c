/*
 * XREFs of ??_GShellHookRegistration@details@AppViewEventHelpers@@UEAAPEAXI@Z @ 0x180193C00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$EventRegistration@UIApplicationViewCollection@@UIApplicationViewChangeListener@@@details@AppViewEventHelpers@@UEAA@XZ @ 0x180193C34 (--1-$EventRegistration@UIApplicationViewCollection@@UIApplicationViewChangeListener@@@details@Ap.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

AppViewEventHelpers::details::ShellHookRegistration *__fastcall AppViewEventHelpers::details::ShellHookRegistration::`scalar deleting destructor'(
        AppViewEventHelpers::details::ShellHookRegistration *this,
        char a2)
{
  AppViewEventHelpers::details::EventRegistration<IApplicationViewCollection,IApplicationViewChangeListener>::~EventRegistration<IApplicationViewCollection,IApplicationViewChangeListener>();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
