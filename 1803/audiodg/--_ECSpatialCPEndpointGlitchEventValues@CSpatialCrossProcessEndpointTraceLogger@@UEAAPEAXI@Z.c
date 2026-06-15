/*
 * XREFs of ??_ECSpatialCPEndpointGlitchEventValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAPEAXI@Z @ 0x140059920
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C304 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CSpatialCrossProcessEndpointTraceLogger::CSpatialCPEndpointGlitchEventValues *__fastcall CSpatialCrossProcessEndpointTraceLogger::CSpatialCPEndpointGlitchEventValues::`vector deleting destructor'(
        CSpatialCrossProcessEndpointTraceLogger::CSpatialCPEndpointGlitchEventValues *this,
        char a2)
{
  *(_QWORD *)this = &CAggregateValuesBase<enum CpGlitchEvent,unsigned int *>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
