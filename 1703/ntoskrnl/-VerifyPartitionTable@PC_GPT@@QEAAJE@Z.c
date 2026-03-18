/*
 * XREFs of ?VerifyPartitionTable@PC_GPT@@QEAAJE@Z @ 0x140269220
 * Callers:
 *     PcVerifyPartitionTable @ 0x1401536E4 (PcVerifyPartitionTable.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x140134030 (RtlComputeCrc32.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ?ReadEntries@PC_GPT@@AEAAJPEAVGPT_HEADER@@PEAU_GPT_ENTRY@@@Z @ 0x140268D80 (-ReadEntries@PC_GPT@@AEAAJPEAVGPT_HEADER@@PEAU_GPT_ENTRY@@@Z.c)
 *     ?ReadHeader@PC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x140268E04 (-ReadHeader@PC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z.c)
 *     ?WriteSectors@PC_DISK@@QEAAJK_KPEAX@Z @ 0x14026994C (-WriteSectors@PC_DISK@@QEAAJK_KPEAX@Z.c)
 *     PspQueueApcSpecialApc @ 0x14044FB60 (PspQueueApcSpecialApc.c)
 *     ?AllocatePool@PC_ENVIRONMENT@@SAPEAXKEK@Z @ 0x1405C263C (-AllocatePool@PC_ENVIRONMENT@@SAPEAXKEK@Z.c)
 */

__int64 __fastcall PC_GPT::VerifyPartitionTable(PC_DISK **this, char a2)
{
  __int64 *v2; // r15
  unsigned int v3; // esi
  __int64 v5; // rbx
  __int64 v6; // r13
  __int64 v7; // rdi
  int v8; // edx
  __int64 v9; // r12
  UCHAR *Pool; // rax
  UCHAR *v11; // rdi
  UCHAR *v12; // r12
  PC_DISK *v13; // rax
  char v14; // r9
  unsigned int v15; // ebx
  __int64 v16; // r8
  int v17; // edx
  int v18; // ecx
  _BOOL8 v19; // r15
  BOOL v20; // esi
  PUCHAR v21; // rbx
  int v22; // eax
  unsigned int v23; // edi
  __int64 v24; // rax
  unsigned int v25; // edi
  __int64 v26; // rcx
  __int64 v27; // rcx
  unsigned __int64 v28; // r8
  PUCHAR v29; // r9
  _QWORD *v30; // rdi
  PUCHAR Buffer; // [rsp+20h] [rbp-30h]
  __int64 v33; // [rsp+28h] [rbp-28h]
  void *v34[2]; // [rsp+30h] [rbp-20h]
  _QWORD v35[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v37; // [rsp+A0h] [rbp+50h] BYREF

  v2 = &v37;
  v3 = 0;
  v35[0] = 0LL;
  v35[1] = 0LL;
  v34[0] = 0LL;
  v5 = 0LL;
  v6 = 2LL;
  v34[1] = 0LL;
  Buffer = 0LL;
  v33 = 0LL;
  LOWORD(v37) = 0;
  do
  {
    v7 = *((_QWORD *)*this + 6);
    (&Buffer)[v5] = (PUCHAR)v7;
    if ( (int)PC_GPT::ReadHeader(this, v3, (struct GPT_HEADER *)v7) >= 0 )
    {
      v8 = *((_DWORD *)*this + 7);
      v9 = ~(v8 - 1) & (unsigned int)(*(_DWORD *)(v7 + 80) * *(_DWORD *)(v7 + 84) + v8 - 1);
      Pool = (UCHAR *)PC_ENVIRONMENT::AllocatePool((1 << *((_DWORD *)*this + 10)) + (int)v9, v8, 0x54506350u);
      v35[v5] = Pool;
      v11 = Pool;
      if ( !Pool )
      {
        v15 = -1073741670;
        goto LABEL_33;
      }
      if ( v3 )
      {
        v13 = *this;
        v12 = v11;
        (&Buffer)[v5] = v11;
        v11 += 1 << *((_DWORD *)v13 + 10);
        v34[v5] = v11;
      }
      else
      {
        v12 = &Pool[v9];
        v34[v5] = Pool;
        (&Buffer)[v5] = v12;
      }
      memmove(v12, *((const void **)*this + 6), 1 << *((_DWORD *)*this + 10));
      if ( (int)PC_GPT::ReadEntries(this, (struct GPT_HEADER *)v12, (struct _GPT_ENTRY *)v11) >= 0 )
        *(_BYTE *)v2 = 1;
    }
    ++v3;
    ++v5;
    v2 = (__int64 *)((char *)v2 + 1);
  }
  while ( v3 < 2 );
  v14 = v37;
  v15 = 0;
  if ( (_BYTE)v37 )
  {
    if ( BYTE1(v37)
      && *(_QWORD *)(v33 + 24) == *((_QWORD *)Buffer + 4)
      && *(_QWORD *)(v33 + 32) == *((_QWORD *)Buffer + 3)
      && *(_QWORD *)(v33 + 40) == *((_QWORD *)Buffer + 5)
      && *(_QWORD *)(v33 + 48) == *((_QWORD *)Buffer + 6)
      && *(_DWORD *)(v33 + 80) == *((_DWORD *)Buffer + 20)
      && *(_DWORD *)(v33 + 84) == *((_DWORD *)Buffer + 21)
      && *(_DWORD *)(v33 + 88) == *((_DWORD *)Buffer + 22) )
    {
      v16 = *(_QWORD *)(v33 + 56) - *((_QWORD *)Buffer + 7);
      if ( !v16 )
        v16 = *(_QWORD *)(v33 + 64) - *((_QWORD *)Buffer + 8);
      if ( !v16 )
        goto LABEL_33;
    }
  }
  else if ( !BYTE1(v37) )
  {
LABEL_12:
    v15 = -1073741774;
    goto LABEL_33;
  }
  if ( !a2 )
    goto LABEL_12;
  v17 = *((_DWORD *)*this + 7);
  v18 = *((_DWORD *)*this + 10);
  v19 = (_BYTE)v37 == 0;
  v20 = (_BYTE)v37 != 0;
  v21 = (&Buffer)[v19];
  v22 = *((_DWORD *)v21 + 20) * *((_DWORD *)v21 + 21);
  *((_DWORD *)v21 + 4) = 0;
  v23 = ~(v17 - 1) & (v22 + v17 - 1);
  v24 = *((_QWORD *)v21 + 4);
  v25 = v23 >> v18;
  v26 = *((_QWORD *)v21 + 3);
  *((_QWORD *)v21 + 3) = v24;
  *((_QWORD *)v21 + 4) = v26;
  if ( v14 )
    v27 = *((_QWORD *)v21 + 3) - v25;
  else
    v27 = v24 + 1;
  *((_QWORD *)v21 + 9) = v27;
  *((_DWORD *)v21 + 4) = RtlComputeCrc32(0, v21, *((_DWORD *)v21 + 3));
  if ( v20 )
  {
    v29 = (PUCHAR)v34[v19];
    v28 = *((_QWORD *)v21 + 9);
  }
  else
  {
    v28 = *((_QWORD *)v21 + 3);
    v29 = v21;
  }
  v15 = PC_DISK::WriteSectors(*this, v25 + 1, v28, v29);
LABEL_33:
  v30 = v35;
  do
  {
    if ( *v30 )
      PspQueueApcSpecialApc(*v30);
    ++v30;
    --v6;
  }
  while ( v6 );
  return v15;
}
