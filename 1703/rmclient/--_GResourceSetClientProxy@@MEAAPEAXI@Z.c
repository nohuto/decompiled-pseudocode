/*
 * XREFs of ??_GResourceSetClientProxy@@MEAAPEAXI@Z @ 0x18000C900
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000728C (--3@YAXPEAX@Z.c)
 *     ??1ResourceSetClientProxy@@MEAA@XZ @ 0x18000C874 (--1ResourceSetClientProxy@@MEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall ResourceSetClientProxy::`scalar deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this,
        char a2)
{
  ResourceSetClientProxy::~ResourceSetClientProxy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
