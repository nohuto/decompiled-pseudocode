/*
 * XREFs of ?GetTags@CDeletedNotificationList@DirectComposition@@QEAAXKPEA_KPEAK@Z @ 0x1C0006478
 * Callers:
 *     NtDCompositionGetDeletedResources @ 0x1C00117F0 (NtDCompositionGetDeletedResources.c)
 * Callees:
 *     memmove @ 0x1C0079B80 (memmove.c)
 */

void __fastcall DirectComposition::CDeletedNotificationList::GetTags(
        DirectComposition::CDeletedNotificationList *this,
        unsigned int a2,
        unsigned __int64 *a3,
        unsigned int *a4)
{
  unsigned int v4; // edi
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rdx
  unsigned int v9; // r8d
  __int64 v10; // rbx
  unsigned __int64 v11; // rax

  v4 = a2;
  if ( *((_DWORD *)this + 11) < a2 )
    v4 = *((_DWORD *)this + 11);
  *a4 = v4;
  if ( v4 )
  {
    LODWORD(v7) = *((_DWORD *)this + 6);
    LODWORD(v8) = *((_DWORD *)this + 10);
    do
    {
      v9 = v7 - v8;
      v10 = v4;
      if ( v4 >= v9 )
        v10 = v9;
      memmove(
        a3,
        (const void *)(*(_QWORD *)this + *((_QWORD *)this + 4) * (unsigned int)v8),
        *((_QWORD *)this + 4) * (unsigned int)v10);
      a3 += v10;
      v7 = *((_QWORD *)this + 3);
      v11 = (unsigned int)(v10 + *((_DWORD *)this + 10));
      *((_DWORD *)this + 11) -= v10;
      v8 = v11 % v7;
      *((_DWORD *)this + 10) = v11 % v7;
      v4 -= v10;
    }
    while ( v4 );
  }
}
