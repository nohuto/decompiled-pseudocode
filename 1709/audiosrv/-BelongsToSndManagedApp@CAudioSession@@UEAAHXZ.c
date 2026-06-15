/*
 * XREFs of ?BelongsToSndManagedApp@CAudioSession@@UEAAHXZ @ 0x18001AE90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

_BOOL8 __fastcall CAudioSession::BelongsToSndManagedApp(struct _RTL_CRITICAL_SECTION *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rsi
  _QWORD *p_Type; // rbx
  _QWORD *v4; // rbp
  BOOL v5; // ebx

  v1 = this + 20;
  EnterCriticalSection(this + 20);
  p_Type = &this[21].DebugInfo->Type;
  v4 = *(_QWORD **)&this[21].LockCount;
  while ( 1 )
  {
    if ( p_Type == v4 )
    {
      v5 = (__int64)(*(_QWORD *)&this[21].LockCount - (unsigned __int64)this[21].DebugInfo) >> 3 != 0;
      goto LABEL_4;
    }
    if ( !(*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*p_Type + 96LL))(*p_Type) )
      break;
    ++p_Type;
  }
  v5 = 0;
LABEL_4:
  if ( v1 )
    LeaveCriticalSection(v1);
  return v5;
}
