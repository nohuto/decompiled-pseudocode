/*
 * XREFs of ?RebalanceExtensions@@YAXXZ @ 0x1C00B497C
 * Callers:
 *     ?Iterate@@YA_NXZ @ 0x1C00FE56C (-Iterate@@YA_NXZ.c)
 *     NetPacketPoolInitialize @ 0x1C011C1B0 (NetPacketPoolInitialize.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0025C68 (--3@YAXPEAX@Z.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BEE50 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BEEB4 (--1KLockHolder@@QEAA@XZ.c)
 */

void RebalanceExtensions(void)
{
  ULONG RecommendedSharedDataAlignment; // eax
  int v1; // edi
  char *v2; // rdx
  void **v3; // rbx
  _QWORD *v4; // rcx
  char *v5; // r8
  char *v6; // rax
  int v7; // eax
  unsigned int v8; // ecx
  KLockHolder v9; // [rsp+20h] [rbp-28h] BYREF

  RecommendedSharedDataAlignment = KeGetRecommendedSharedDataAlignment();
  v1 = 16;
  v9.m_Region.m_Entered = 0;
  if ( RecommendedSharedDataAlignment < 0x10 )
    RecommendedSharedDataAlignment = 16;
  dword_1C00996F0 &= 0xFFFFFFF0;
  v9.m_State = Unlocked;
  dword_1C00996F4 = RecommendedSharedDataAlignment;
  v9.m_Lock = (KPushLockBase *)&unk_1C009ACF8;
  KLockHolder::AcquireExclusive(&v9);
  v2 = (char *)qword_1C009AEB0;
  v3 = &qword_1C009AEB0;
  if ( qword_1C009AEB0 )
  {
    do
    {
      if ( v2[32] )
      {
        *v3 = (void *)*((_QWORD *)v2 + 5);
        operator delete(v2);
      }
      else
      {
        v3 = (void **)(v2 + 40);
      }
      v2 = (char *)*v3;
    }
    while ( *v3 );
    v2 = (char *)qword_1C009AEB0;
  }
  v4 = v2;
  if ( v2 )
  {
    v7 = dword_1C00996F0;
    do
    {
      if ( v4[7] )
      {
        v7 |= 1u;
        dword_1C00996F0 = v7;
      }
      if ( v4[8] )
      {
        v7 |= 2u;
        dword_1C00996F0 = v7;
      }
      if ( v4[9] )
      {
        v7 |= 4u;
        dword_1C00996F0 = v7;
      }
      if ( v4[10] )
      {
        v7 |= 8u;
        dword_1C00996F0 = v7;
      }
      v4 = (_QWORD *)v4[5];
    }
    while ( v4 );
  }
  LODWORD(Size) = 0;
  if ( v2 )
  {
    v6 = v2;
    do
    {
      *((_QWORD *)v6 + 3) = 0LL;
      v6 = (char *)*((_QWORD *)v6 + 5);
    }
    while ( v6 );
  }
  while ( 1 )
  {
    v5 = v2;
    if ( !v2 )
      break;
    while ( *((_QWORD *)v5 + 3) )
    {
      v5 = (char *)*((_QWORD *)v5 + 5);
      if ( !v5 )
        goto LABEL_7;
    }
    v8 = ~(*((_DWORD *)v5 + 5) - 1) & (*((_DWORD *)v5 + 5) + v1 - 1);
    *((_QWORD *)v5 + 3) = v8;
    v1 = v8 + *((_DWORD *)v5 + 2);
  }
LABEL_7:
  LODWORD(Size) = v1;
  KLockHolder::~KLockHolder(&v9);
}
