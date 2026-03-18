/*
 * XREFs of ??_GSESSION_VIEW@@QEAAPEAXI@Z @ 0x1C000833C
 * Callers:
 *     ?RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ @ 0x1C00B275C (-RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z @ 0x1C00B27C8 (-RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 *     ??1SESSION_VIEW@@QEAA@XZ @ 0x1C00B50CC (--1SESSION_VIEW@@QEAA@XZ.c)
 */

SESSION_VIEW *__fastcall SESSION_VIEW::`scalar deleting destructor'(SESSION_VIEW *this)
{
  SESSION_VIEW::~SESSION_VIEW(this);
  operator delete(this);
  return this;
}
