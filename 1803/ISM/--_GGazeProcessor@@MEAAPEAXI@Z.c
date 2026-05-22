/*
 * XREFs of ??_GGazeProcessor@@MEAAPEAXI@Z @ 0x1800379D8
 * Callers:
 *     ??_EGazeProcessor@@OCA@EAAPEAXI@Z @ 0x1800387F0 (--_EGazeProcessor@@OCA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1GazeProcessor@@MEAA@XZ @ 0x180037A1C (--1GazeProcessor@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

GazeProcessor *__fastcall GazeProcessor::`scalar deleting destructor'(GazeProcessor *this, char a2)
{
  GazeProcessor::~GazeProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      operator delete(this);
    else
      free(this);
  }
  return this;
}
