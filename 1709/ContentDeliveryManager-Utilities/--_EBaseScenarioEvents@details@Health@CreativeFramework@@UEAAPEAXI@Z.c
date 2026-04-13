/*
 * XREFs of ??_EBaseScenarioEvents@details@Health@CreativeFramework@@UEAAPEAXI@Z @ 0x180029DC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1BaseScenarioEvents@details@Health@CreativeFramework@@UEAA@XZ @ 0x180029218 (--1BaseScenarioEvents@details@Health@CreativeFramework@@UEAA@XZ.c)
 */

CreativeFramework::Health::details::BaseScenarioEvents *__fastcall CreativeFramework::Health::details::BaseScenarioEvents::`vector deleting destructor'(
        CreativeFramework::Health::details::BaseScenarioEvents *this,
        char a2)
{
  CreativeFramework::Health::details::BaseScenarioEvents::~BaseScenarioEvents(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
