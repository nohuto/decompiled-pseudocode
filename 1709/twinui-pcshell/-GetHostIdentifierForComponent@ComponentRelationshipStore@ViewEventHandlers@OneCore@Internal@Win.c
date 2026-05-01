/*
 * XREFs of ?GetHostIdentifierForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIPEAW4CRSComponentRelationshipFlags@2345@PEAUtagHostIdentifier@2345@@Z @ 0x1801C5D20
 * Callers:
 *     ?RegisterComponentForHost@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIII@Z @ 0x1801C5580 (-RegisterComponentForHost@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetHostIdentifierForComponentNoLock@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@AEAAJIPEAW4CRSComponentRelationshipFlags@2345@PEAUtagHostIdentifier@2345@@Z @ 0x1801C5C60 (-GetHostIdentifierForComponentNoLock@ComponentRelationshipStore@ViewEventHandlers@OneCore@Intern.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetHostIdentifierForComponent(
        RTL_SRWLOCK *this,
        int a2,
        enum Windows::Internal::OneCore::ViewEventHandlers::CRSComponentRelationshipFlags *a3,
        struct Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier *a4)
{
  RTL_SRWLOCK *v4; // r14
  int HostIdentifierForComponentNoLock; // eax
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = this + 10;
  AcquireSRWLockShared(this + 10);
  AcquireSRWLockExclusive(this + 11);
  HostIdentifierForComponentNoLock = Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetHostIdentifierForComponentNoLock(
                                       (Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *)this,
                                       a2,
                                       a3,
                                       a4);
  v10 = HostIdentifierForComponentNoLock;
  if ( HostIdentifierForComponentNoLock >= 0 )
    v10 = 0;
  else
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x167,
      (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
      (const char *)(unsigned int)HostIdentifierForComponentNoLock);
  if ( this != (RTL_SRWLOCK *)-88LL )
    ReleaseSRWLockExclusive(this + 11);
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return v10;
}
