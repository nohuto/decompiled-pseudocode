/*
 * XREFs of ??_GSESSION_EVENT@@UEAAPEAXI@Z @ 0x180025BF0
 * Callers:
 *     ?PostSessionEvent@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x180025AF4 (-PostSessionEvent@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 *     ?EventWorkerThread@@YAKPEAX@Z @ 0x180038440 (-EventWorkerThread@@YAKPEAX@Z.c)
 * Callees:
 *     ??1SESSION_EVENT@@UEAA@XZ @ 0x180025C24 (--1SESSION_EVENT@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

SESSION_EVENT *__fastcall SESSION_EVENT::`scalar deleting destructor'(SESSION_EVENT *this, char a2)
{
  SESSION_EVENT::~SESSION_EVENT(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
