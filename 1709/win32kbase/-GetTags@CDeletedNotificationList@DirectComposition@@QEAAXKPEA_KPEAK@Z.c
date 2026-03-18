/*
 * XREFs of ?GetTags@CDeletedNotificationList@DirectComposition@@QEAAXKPEA_KPEAK@Z @ 0x1C007C4A4
 * Callers:
 *     NtDCompositionGetDeletedResources @ 0x1C0089660 (NtDCompositionGetDeletedResources.c)
 * Callees:
 *     memmove @ 0x1C00AB840 (memmove.c)
 */

void __fastcall DirectComposition::CDeletedNotificationList::GetTags(
        DirectComposition::CDeletedNotificationList *this,
        unsigned int a2,
        unsigned __int64 *a3,
        unsigned int *a4)
{
  unsigned int v4; // esi
  __int64 v7; // rdx
  __int64 v8; // rdi
  int v9; // eax

  v4 = a2;
  if ( *((_DWORD *)this + 11) < a2 )
    v4 = *((_DWORD *)this + 11);
  for ( *a4 = v4; v4; v4 -= v8 )
  {
    v7 = *((unsigned int *)this + 10);
    v8 = (unsigned int)(*((_DWORD *)this + 6) - v7);
    if ( v4 < (unsigned int)v8 )
      v8 = v4;
    memmove(a3, (const void *)(*(_QWORD *)this + *((_QWORD *)this + 4) * v7), (unsigned int)v8 * *((_QWORD *)this + 4));
    v9 = *((_DWORD *)this + 10);
    a3 += v8;
    *((_DWORD *)this + 11) -= v8;
    *((_DWORD *)this + 10) = (unsigned __int64)(unsigned int)(v8 + v9) % *((_QWORD *)this + 3);
  }
}
