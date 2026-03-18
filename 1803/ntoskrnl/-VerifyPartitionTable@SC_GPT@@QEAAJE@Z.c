/*
 * XREFs of ?VerifyPartitionTable@SC_GPT@@QEAAJE@Z @ 0x1402C8D74
 * Callers:
 *     ?VerifyPartitionTable@SC_DISK@@QEAAJE@Z @ 0x14015D1C8 (-VerifyPartitionTable@SC_DISK@@QEAAJE@Z.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x140147C40 (RtlComputeCrc32.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ?WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x1402C8718 (-WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z.c)
 *     ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAU_GPT_ENTRY@@@Z @ 0x1402C8880 (-ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAU_GPT_ENTRY@@@Z.c)
 *     ?ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x1402C890C (-ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z.c)
 *     PspQueueApcSpecialApc @ 0x14052A140 (PspQueueApcSpecialApc.c)
 *     ?Allocate@SC_ENV@@SAPEAX_K@Z @ 0x1405F2108 (-Allocate@SC_ENV@@SAPEAX_K@Z.c)
 */

__int64 __fastcall SC_GPT::VerifyPartitionTable(SC_DISK **this, char a2)
{
  unsigned int v3; // edi
  SC_DISK *v4; // rax
  unsigned int v5; // r13d
  __int16 *v6; // r15
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // r12
  UCHAR *v10; // rax
  UCHAR *v11; // r14
  SC_DISK *v12; // rdx
  int v13; // ecx
  UCHAR *v14; // r12
  unsigned int v15; // ebx
  SC_DISK *v16; // r10
  __int64 v17; // rcx
  int v18; // ecx
  __int64 v19; // r14
  bool v20; // zf
  int v21; // edx
  BOOL v22; // r15d
  __int64 v23; // rbx
  int v24; // eax
  unsigned int v25; // edi
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // r8
  void *v30; // r9
  _QWORD *v31; // rdi
  __int64 v32; // rsi
  PUCHAR Buffer; // [rsp+20h] [rbp-30h]
  __int64 v35; // [rsp+28h] [rbp-28h]
  void *v36[2]; // [rsp+30h] [rbp-20h]
  _QWORD v37[2]; // [rsp+40h] [rbp-10h] BYREF
  __int16 v38; // [rsp+90h] [rbp+40h] BYREF
  char v39; // [rsp+98h] [rbp+48h]

  v39 = a2;
  v37[0] = 0LL;
  v37[1] = 0LL;
  v36[0] = 0LL;
  v36[1] = 0LL;
  v3 = 0;
  v4 = *this;
  Buffer = 0LL;
  v35 = 0LL;
  v38 = 0;
  v5 = ((*((_DWORD *)v4 + 32) & 1) == 0) + 1;
  v6 = &v38;
  v7 = 0LL;
  do
  {
    v8 = *((_QWORD *)*this + 24);
    (&Buffer)[v7] = (PUCHAR)v8;
    if ( (int)SC_GPT::ReadHeader(this, v3, (struct GPT_HEADER *)v8) >= 0 )
    {
      v9 = ~(*((_DWORD *)*this + 41) - 1) & (unsigned int)(*(_DWORD *)(v8 + 80) * *(_DWORD *)(v8 + 84)
                                                         + *((_DWORD *)*this + 41)
                                                         - 1);
      v10 = (UCHAR *)SC_ENV::Allocate((unsigned int)(v9 + (1 << *((_DWORD *)*this + 43))));
      v37[v7] = v10;
      v11 = v10;
      if ( !v10 )
      {
        v15 = -1073741670;
        goto LABEL_34;
      }
      v12 = *this;
      v13 = *((_DWORD *)*this + 43);
      if ( v3 )
      {
        (&Buffer)[v7] = v10;
        v14 = v10;
        v11 = &v10[1 << v13];
        v36[v7] = v11;
      }
      else
      {
        v14 = &v10[v9];
        v36[v7] = v10;
        (&Buffer)[v7] = v14;
      }
      memmove(v14, *((const void **)v12 + 24), 1 << v13);
      if ( (int)SC_GPT::ReadEntries(this, (struct GPT_HEADER *)v14, (struct _GPT_ENTRY *)v11) >= 0 )
        *(_BYTE *)v6 = 1;
    }
    ++v3;
    ++v7;
    v6 = (__int16 *)((char *)v6 + 1);
  }
  while ( v3 < v5 );
  v15 = 0;
  if ( !v38 )
  {
LABEL_11:
    v15 = -1073741774;
    goto LABEL_34;
  }
  v16 = *this;
  if ( (*((_DWORD *)*this + 32) & 1) == 0 )
  {
    if ( !(_BYTE)v38
      || !HIBYTE(v38)
      || *(_QWORD *)(v35 + 24) != *((_QWORD *)Buffer + 4)
      || *(_QWORD *)(v35 + 32) != *((_QWORD *)Buffer + 3)
      || *(_QWORD *)(v35 + 40) != *((_QWORD *)Buffer + 5)
      || *(_QWORD *)(v35 + 48) != *((_QWORD *)Buffer + 6)
      || *(_DWORD *)(v35 + 80) != *((_DWORD *)Buffer + 20)
      || *(_DWORD *)(v35 + 84) != *((_DWORD *)Buffer + 21)
      || *(_DWORD *)(v35 + 88) != *((_DWORD *)Buffer + 22) )
    {
      goto LABEL_26;
    }
    v17 = *(_QWORD *)(v35 + 56) - *((_QWORD *)Buffer + 7);
    if ( !v17 )
      v17 = *(_QWORD *)(v35 + 64) - *((_QWORD *)Buffer + 8);
    if ( v17 )
    {
LABEL_26:
      if ( !v39 )
        goto LABEL_11;
      v18 = *((_DWORD *)v16 + 43);
      v19 = (_BYTE)v38 == 0 ? 8 : 0;
      v20 = (_BYTE)v38 == 0;
      v21 = *((_DWORD *)v16 + 41);
      v22 = (_BYTE)v38 != 0;
      v23 = *(__int64 *)((char *)&Buffer + v19);
      v24 = *(_DWORD *)(v23 + 80) * *(_DWORD *)(v23 + 84);
      *(_DWORD *)(v23 + 16) = 0;
      v25 = (~(v21 - 1) & (unsigned int)(v24 + v21 - 1)) >> v18;
      v26 = *(_QWORD *)(v23 + 24);
      *(_QWORD *)(v23 + 24) = *(_QWORD *)(v23 + 32);
      *(_QWORD *)(v23 + 32) = v26;
      v27 = *(_QWORD *)(v23 + 24);
      if ( v20 )
        v28 = v27 + 1;
      else
        v28 = v27 - v25;
      *(_QWORD *)(v23 + 72) = v28;
      *(_DWORD *)(v23 + 16) = RtlComputeCrc32(0, (PUCHAR)v23, *(_DWORD *)(v23 + 12));
      if ( v22 )
      {
        v30 = *(void **)((char *)v36 + v19);
        v29 = *(_QWORD *)(v23 + 72);
      }
      else
      {
        v29 = *(_QWORD *)(v23 + 24);
        v30 = (void *)v23;
      }
      v15 = SC_DISK::WriteSectors(*this, v25 + 1, v29, v30);
    }
  }
LABEL_34:
  v31 = v37;
  v32 = 2LL;
  do
  {
    if ( *v31 )
      PspQueueApcSpecialApc(*v31);
    ++v31;
    --v32;
  }
  while ( v32 );
  return v15;
}
