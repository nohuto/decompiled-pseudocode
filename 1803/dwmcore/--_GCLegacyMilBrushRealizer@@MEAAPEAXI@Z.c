/*
 * XREFs of ??_GCLegacyMilBrushRealizer@@MEAAPEAXI@Z @ 0x1801AE300
 * Callers:
 *     <none>
 * Callees:
 *     ??1CLegacyMilBrushRealizer@@MEAA@XZ @ 0x18001D908 (--1CLegacyMilBrushRealizer@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 */

CLegacyMilBrushRealizer *__fastcall CLegacyMilBrushRealizer::`scalar deleting destructor'(
        CLegacyMilBrushRealizer *this,
        char a2)
{
  CLegacyMilBrushRealizer::~CLegacyMilBrushRealizer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
