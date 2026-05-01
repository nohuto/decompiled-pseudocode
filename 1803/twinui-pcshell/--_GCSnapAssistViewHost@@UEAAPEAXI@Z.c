/*
 * XREFs of ??_GCSnapAssistViewHost@@UEAAPEAXI@Z @ 0x180276CC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180098FA8 (--3@YAXPEAX@Z.c)
 *     ??1CSnapAssistViewHost@@UEAA@XZ @ 0x180276BF0 (--1CSnapAssistViewHost@@UEAA@XZ.c)
 */

CSnapAssistViewHost *__fastcall CSnapAssistViewHost::`scalar deleting destructor'(CSnapAssistViewHost *this, char a2)
{
  CSnapAssistViewHost::~CSnapAssistViewHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
