/*
 * XREFs of ??_GMPCRawInputProvider@@MEAAPEAXI@Z @ 0x18005DF60
 * Callers:
 *     <none>
 * Callees:
 *     ??1MPCRawInputProvider@@MEAA@XZ @ 0x18005DCF4 (--1MPCRawInputProvider@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

MPCRawInputProvider *__fastcall MPCRawInputProvider::`scalar deleting destructor'(MPCRawInputProvider *this, char a2)
{
  MPCRawInputProvider::~MPCRawInputProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
