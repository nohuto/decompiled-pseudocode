/*
 * XREFs of ??_GControllerProcessor@@MEAAPEAXI@Z @ 0x180032060
 * Callers:
 *     ??_EControllerProcessor@@O7EAAPEAXI@Z @ 0x180036890 (--_EControllerProcessor@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x1800320A4 (--1ControllerProcessor@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ControllerProcessor *__fastcall ControllerProcessor::`scalar deleting destructor'(ControllerProcessor *this, char a2)
{
  ControllerProcessor::~ControllerProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      operator delete(this);
    else
      free(this);
  }
  return this;
}
