/*
 * XREFs of ??0ITaggableTarget@@QEAA@XZ @ 0x1802AEAC8
 * Callers:
 *     ??0CAppTransitionTargetBase@@QEAA@XZ @ 0x1802AE8E4 (--0CAppTransitionTargetBase@@QEAA@XZ.c)
 * Callees:
 *     ??0IApplicationViewChangeListener@@QEAA@XZ @ 0x18009770C (--0IApplicationViewChangeListener@@QEAA@XZ.c)
 */

ITaggableTarget *__fastcall ITaggableTarget::ITaggableTarget(ITaggableTarget *this)
{
  IApplicationViewChangeListener::IApplicationViewChangeListener(this);
  *(_QWORD *)this = &ITaggableTarget::`vftable';
  return this;
}
