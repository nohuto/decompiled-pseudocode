/*
 * XREFs of ??_EDXGCHANNELENDPOINTPROXY@@UEAAPEAXI@Z @ 0x1C01E4980
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005B04 (--3@YAXPEAX@Z.c)
 *     ??1DXGCHANNELENDPOINTPROXY@@UEAA@XZ @ 0x1C01E47B8 (--1DXGCHANNELENDPOINTPROXY@@UEAA@XZ.c)
 */

DXGCHANNELENDPOINTPROXY *__fastcall DXGCHANNELENDPOINTPROXY::`vector deleting destructor'(
        DXGCHANNELENDPOINTPROXY *this,
        char a2)
{
  DXGCHANNELENDPOINTPROXY::~DXGCHANNELENDPOINTPROXY(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
