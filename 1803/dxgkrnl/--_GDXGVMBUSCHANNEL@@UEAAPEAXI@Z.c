/*
 * XREFs of ??_GDXGVMBUSCHANNEL@@UEAAPEAXI@Z @ 0x1C01E49C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005B04 (--3@YAXPEAX@Z.c)
 *     ??1DXGVMBUSCHANNEL@@UEAA@XZ @ 0x1C01E4928 (--1DXGVMBUSCHANNEL@@UEAA@XZ.c)
 */

DXGVMBUSCHANNEL *__fastcall DXGVMBUSCHANNEL::`scalar deleting destructor'(DXGVMBUSCHANNEL *this, char a2)
{
  DXGVMBUSCHANNEL::~DXGVMBUSCHANNEL(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
