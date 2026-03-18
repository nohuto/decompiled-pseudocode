/*
 * XREFs of NtDCompositionCommitSynchronizationObject @ 0x1C013EC30
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C000FEF0 (UserIsCurrentProcessDwm.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0013D40 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00146C8 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C014046C (-ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 */

__int64 __fastcall NtDCompositionCommitSynchronizationObject(void *a1)
{
  int v2; // ebx
  struct DirectComposition::CConnection *DefaultConnection; // rax
  PERESOURCE *v4; // rdi
  struct _ERESOURCE *v5; // rbx
  unsigned int v6; // edx
  struct DirectComposition::SynchronizationObject *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0LL;
  v2 = 0;
  if ( !UserIsCurrentProcessDwm() )
    v2 = -1073741790;
  KeEnterCriticalRegion();
  if ( v2 >= 0 )
  {
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
    v4 = (PERESOURCE *)DefaultConnection;
    if ( DefaultConnection )
    {
      v5 = (struct _ERESOURCE *)*((_QWORD *)DefaultConnection + 1);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v5, 1u);
      v2 = DirectComposition::SynchronizationObject::ResolveHandle(a1, 2u, 1, &v8);
      if ( v2 >= 0 )
        *((_BYTE *)v8 + 33) = 1;
      ExReleaseResourceLite(v4[1]);
      KeLeaveCriticalRegion();
      DirectComposition::CConnection::Release((DirectComposition::CConnection *)v4, v6);
    }
    else
    {
      v2 = -1073741790;
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v2;
}
