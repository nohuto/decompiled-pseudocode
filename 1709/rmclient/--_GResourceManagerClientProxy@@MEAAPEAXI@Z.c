/*
 * XREFs of ??_GResourceManagerClientProxy@@MEAAPEAXI@Z @ 0x18000DD20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000725C (--3@YAXPEAX@Z.c)
 *     ??1ResourceManagerClientProxy@@MEAA@XZ @ 0x18000DC10 (--1ResourceManagerClientProxy@@MEAA@XZ.c)
 */

ResourceManagerClientProxy *__fastcall ResourceManagerClientProxy::`scalar deleting destructor'(
        ResourceManagerClientProxy *this,
        char a2)
{
  ResourceManagerClientProxy::~ResourceManagerClientProxy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
