/*
 * XREFs of ??_ECCrossProcessEndpointGlitchValues@CCrossProcessEndpointTraceLogger@@UEAAPEAXI@Z @ 0x14005C4B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D298 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CCrossProcessEndpointTraceLogger::CCrossProcessEndpointGlitchValues *__fastcall CCrossProcessEndpointTraceLogger::CCrossProcessEndpointGlitchValues::`vector deleting destructor'(
        CCrossProcessEndpointTraceLogger::CCrossProcessEndpointGlitchValues *this,
        char a2)
{
  *(_QWORD *)this = &CAggregateValuesBase<enum CpGlitchEvent,unsigned int *>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
