/*
 * XREFs of ??_GCSpatialCrossProcessEndpointTraceLogger@@UEAAPEAXI@Z @ 0x14005C570
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D298 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CSpatialCrossProcessEndpointTraceLogger@@UEAA@XZ @ 0x14005C2CC (--1CSpatialCrossProcessEndpointTraceLogger@@UEAA@XZ.c)
 */

CSpatialCrossProcessEndpointTraceLogger *__fastcall CSpatialCrossProcessEndpointTraceLogger::`scalar deleting destructor'(
        CSpatialCrossProcessEndpointTraceLogger *this,
        char a2)
{
  CSpatialCrossProcessEndpointTraceLogger::~CSpatialCrossProcessEndpointTraceLogger(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
