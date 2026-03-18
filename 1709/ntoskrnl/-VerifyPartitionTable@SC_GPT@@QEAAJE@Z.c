/*
 * XREFs of ?VerifyPartitionTable@SC_GPT@@QEAAJE@Z @ 0x140293238
 * Callers:
 *     ?VerifyPartitionTable@SC_DISK@@QEAAJE@Z @ 0x140146954 (-VerifyPartitionTable@SC_DISK@@QEAAJE@Z.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x140113980 (RtlComputeCrc32.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ?WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x140292BD8 (-WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z.c)
 *     ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAU_GPT_ENTRY@@@Z @ 0x140292D40 (-ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAU_GPT_ENTRY@@@Z.c)
 *     ?ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x140292DCC (-ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z.c)
 *     PspQueueApcSpecialApc @ 0x140453160 (PspQueueApcSpecialApc.c)
 *     ?Allocate@SC_ENV@@SAPEAX_K@Z @ 0x1405C9558 (-Allocate@SC_ENV@@SAPEAX_K@Z.c)
 */

__int64 __fastcall SC_GPT::VerifyPartitionTable(SC_DISK **this, char a2)
{
  unsigned int v3; // esi
  SC_DISK *v4; // rax
  unsigned int v5; // r13d
  __int64 *v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // r12
  UCHAR *v10; // rax
  UCHAR *v11; // rdi
  UCHAR *v12; // r12
  SC_DISK *v13; // rax
  unsigned int v14; // ebx
  SC_DISK *v15; // r10
  __int64 v16; // rcx
  int v17; // ecx
  __int64 v18; // rsi
  int v19; // edx
  BOOL v20; // r15d
  __int64 v21; // rbx
  int v22; // eax
  unsigned int v23; // edi
  __int64 v24; // rax
  unsigned int v25; // edi
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r8
  void *v29; // r9
  _QWORD *v30; // rdi
  __int64 v31; // rsi
  PUCHAR Buffer; // [rsp+20h] [rbp-30h]
  __int64 v34; // [rsp+28h] [rbp-28h]
  void *v35[2]; // [rsp+30h] [rbp-20h]
  _QWORD v36[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v37; // [rsp+90h] [rbp+40h] BYREF
  char v38; // [rsp+98h] [rbp+48h]

  v38 = a2;
  v36[0] = 0LL;
  v36[1] = 0LL;
  v3 = 0;
  v35[0] = 0LL;
  v35[1] = 0LL;
  LOWORD(v37) = 0;
  v4 = *this;
  Buffer = 0LL;
  v34 = 0LL;
  v5 = ((*((_DWORD *)v4 + 32) & 1) == 0) + 1;
  v6 = &v37;
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
      v36[v7] = v10;
      v11 = v10;
      if ( !v10 )
      {
        v14 = -1073741670;
        goto LABEL_34;
      }
      if ( v3 )
      {
        v13 = *this;
        v12 = v11;
        (&Buffer)[v7] = v11;
        v11 += 1 << *((_DWORD *)v13 + 43);
        v35[v7] = v11;
      }
      else
      {
        v12 = &v10[v9];
        v35[v7] = v10;
        (&Buffer)[v7] = v12;
      }
      memmove(v12, *((const void **)*this + 24), 1 << *((_DWORD *)*this + 43));
      if ( (int)SC_GPT::ReadEntries(this, (struct GPT_HEADER *)v12, (struct _GPT_ENTRY *)v11) >= 0 )
        *(_BYTE *)v6 = 1;
    }
    ++v3;
    ++v7;
    v6 = (__int64 *)((char *)v6 + 1);
  }
  while ( v3 < v5 );
  v14 = 0;
  if ( !(_WORD)v37 )
  {
LABEL_11:
    v14 = -1073741774;
    goto LABEL_34;
  }
  v15 = *this;
  if ( (*((_DWORD *)*this + 32) & 1) == 0 )
  {
    if ( !(_BYTE)v37
      || !BYTE1(v37)
      || *(_QWORD *)(v34 + 24) != *((_QWORD *)Buffer + 4)
      || *(_QWORD *)(v34 + 32) != *((_QWORD *)Buffer + 3)
      || *(_QWORD *)(v34 + 40) != *((_QWORD *)Buffer + 5)
      || *(_QWORD *)(v34 + 48) != *((_QWORD *)Buffer + 6)
      || *(_DWORD *)(v34 + 80) != *((_DWORD *)Buffer + 20)
      || *(_DWORD *)(v34 + 84) != *((_DWORD *)Buffer + 21)
      || *(_DWORD *)(v34 + 88) != *((_DWORD *)Buffer + 22) )
    {
      goto LABEL_26;
    }
    v16 = *(_QWORD *)(v34 + 56) - *((_QWORD *)Buffer + 7);
    if ( !v16 )
      v16 = *(_QWORD *)(v34 + 64) - *((_QWORD *)Buffer + 8);
    if ( v16 )
    {
LABEL_26:
      if ( !v38 )
        goto LABEL_11;
      v17 = *((_DWORD *)v15 + 43);
      v18 = (_BYTE)v37 == 0 ? 8 : 0;
      v19 = *((_DWORD *)v15 + 41);
      v20 = (_BYTE)v37 != 0;
      v21 = *(__int64 *)((char *)&Buffer + v18);
      v22 = *(_DWORD *)(v21 + 80) * *(_DWORD *)(v21 + 84);
      *(_DWORD *)(v21 + 16) = 0;
      v23 = ~(v19 - 1) & (v22 + v19 - 1);
      v24 = *(_QWORD *)(v21 + 32);
      v25 = v23 >> v17;
      v26 = *(_QWORD *)(v21 + 24);
      *(_QWORD *)(v21 + 24) = v24;
      *(_QWORD *)(v21 + 32) = v26;
      if ( v20 )
        v27 = *(_QWORD *)(v21 + 24) - v25;
      else
        v27 = v24 + 1;
      *(_QWORD *)(v21 + 72) = v27;
      *(_DWORD *)(v21 + 16) = RtlComputeCrc32(0, (PUCHAR)v21, *(_DWORD *)(v21 + 12));
      if ( v20 )
      {
        v29 = *(void **)((char *)v35 + v18);
        v28 = *(_QWORD *)(v21 + 72);
      }
      else
      {
        v28 = *(_QWORD *)(v21 + 24);
        v29 = (void *)v21;
      }
      v14 = SC_DISK::WriteSectors(*this, v25 + 1, v28, v29);
    }
  }
LABEL_34:
  v30 = v36;
  v31 = 2LL;
  do
  {
    if ( *v30 )
      PspQueueApcSpecialApc(*v30);
    ++v30;
    --v31;
  }
  while ( v31 );
  return v14;
}
