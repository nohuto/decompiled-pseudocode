/*
 * XREFs of sub_18005EE74 @ 0x18005EE74
 * Callers:
 *     EtwLogTraceEvent @ 0x18005EE20 (EtwLogTraceEvent.c)
 *     EtwTraceEventInstance @ 0x180104790 (EtwTraceEventInstance.c)
 * Callees:
 *     sub_18005F1CC @ 0x18005F1CC (sub_18005F1CC.c)
 *     sub_18005F2B4 @ 0x18005F2B4 (sub_18005F2B4.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_180104B00 @ 0x180104B00 (sub_180104B00.c)
 */

__int64 __fastcall sub_18005EE74(unsigned __int16 a1, unsigned __int16 *a2, unsigned int a3, int a4)
{
  int v4; // r13d
  size_t v5; // r12
  _DWORD *v7; // rdi
  __int64 v8; // rcx
  __int64 result; // rax
  unsigned int v10; // ebx
  __int16 v11; // si
  int v12; // eax
  unsigned int v13; // ebx
  unsigned int v14; // edx
  unsigned int v15; // ebx
  unsigned int i; // ecx
  struct _TEB *v17; // rax
  unsigned __int64 *v18; // r9
  size_t v19; // r14
  char *v20; // rax
  char *v21; // rsi
  unsigned int v22; // r12d
  char *v23; // r13
  const void *v24; // rdx
  unsigned int v25; // ecx
  __int64 v26; // rbx
  unsigned __int64 v27; // rax
  CLIENT_ID *p_ClientId; // rdx
  char *v29; // rcx
  bool v30; // [rsp+30h] [rbp-1B8h]
  unsigned int v31; // [rsp+34h] [rbp-1B4h]
  unsigned int v32; // [rsp+38h] [rbp-1B0h] BYREF
  unsigned int v33; // [rsp+3Ch] [rbp-1ACh]
  unsigned int v34; // [rsp+40h] [rbp-1A8h]
  int v35; // [rsp+44h] [rbp-1A4h]
  int v36; // [rsp+48h] [rbp-1A0h]
  _DWORD *v37; // [rsp+50h] [rbp-198h]
  unsigned int v38; // [rsp+58h] [rbp-190h]
  int v39; // [rsp+5Ch] [rbp-18Ch]
  __int64 v40; // [rsp+60h] [rbp-188h] BYREF
  unsigned __int64 v41; // [rsp+68h] [rbp-180h] BYREF
  int UniqueThread; // [rsp+70h] [rbp-178h]
  int UniqueProcess; // [rsp+74h] [rbp-174h]
  char *v44; // [rsp+78h] [rbp-170h]
  char *v45; // [rsp+80h] [rbp-168h]
  struct _TEB *v46; // [rsp+88h] [rbp-160h]
  CLIENT_ID *v47; // [rsp+90h] [rbp-158h]
  void *Src[32]; // [rsp+A0h] [rbp-148h] BYREF

  v4 = a4;
  v35 = a4;
  v5 = a3;
  v40 = 0LL;
  v7 = 0LL;
  v37 = 0LL;
  v34 = 0;
  v41 = 0LL;
  v32 = a1 & 0x7FFF;
  if ( !qword_1801593C0 )
    return 4201LL;
  if ( (a1 & 0x7FFFu) < 0x40 || (result = sub_180104B00(a1, &v32), !(_DWORD)result) )
  {
    v8 = 2LL * v32;
    _InterlockedIncrement((volatile signed __int32 *)(qword_1801593C0 + 16LL * v32 + 8));
    v7 = *(_DWORD **)(qword_1801593C0 + 8 * v8);
    if ( (*(_BYTE *)(qword_1801593C0 + 8 * v8) & 1) == 0 )
    {
      v37 = *(_DWORD **)(qword_1801593C0 + 8 * v8);
      result = 0LL;
      goto LABEL_5;
    }
    _InterlockedDecrement((volatile signed __int32 *)(qword_1801593C0 + 8 * v8 + 8));
    return 4201LL;
  }
LABEL_5:
  v31 = result;
  if ( (_DWORD)result )
    return result;
  v10 = *a2;
  v33 = v10;
  if ( v10 < (unsigned int)v5 )
  {
    v31 = 87;
  }
  else
  {
    v36 = *((_DWORD *)a2 + 11);
    v11 = v36;
    if ( (v36 & 0x200000) != 0 )
    {
      v12 = sub_18005F1CC(v7, a2);
    }
    else
    {
      if ( (v36 & 0x100000) != 0 )
      {
        v13 = v10 - v5;
        if ( v13 > 0x100 )
        {
          v31 = 13;
        }
        else
        {
          memset(Src, 0, sizeof(Src));
          if ( v13 )
            memmove(Src, (char *)a2 + v5, v13);
          v14 = v5;
          v33 = v5;
          v15 = v13 >> 4;
          v34 = v15;
          for ( i = 0; ; ++i )
          {
            v38 = i;
            if ( i >= v15 )
            {
              v4 = v35;
              goto LABEL_17;
            }
            v14 += LODWORD(Src[2 * i + 1]);
            v33 = v14;
            if ( v14 < LODWORD(Src[2 * i + 1]) )
              break;
          }
          v31 = 234;
        }
        goto LABEL_44;
      }
LABEL_17:
      v30 = (v11 & 0x200) != 0;
      v17 = NtCurrentTeb();
      v46 = v17;
      v18 = &v41;
      if ( (v11 & 0x200) != 0 )
        v18 = 0LL;
      v19 = v33;
      v7 = v37;
      v20 = (char *)sub_18005F2B4(v37, v33, v17->CurrentIdealProcessor.Reserved, v18, &v40);
      v21 = v20;
      v45 = v20;
      if ( v20 )
      {
        if ( (v36 & 0x100000) != 0 )
        {
          v23 = &v20[v5];
          v44 = &v20[v5];
          memmove(v20, a2, v5);
          v22 = 0;
          v39 = 0;
          while ( v22 < v34 )
          {
            v24 = Src[2 * v22];
            v25 = (unsigned int)Src[2 * v22 + 1];
            if ( v24 && v25 )
            {
              v26 = v25;
              memmove(v23, v24, v25);
              v23 += v26;
              v44 = v23;
            }
            v39 = ++v22;
          }
          v4 = v35;
        }
        else
        {
          memmove(v20, a2, v19);
        }
        if ( (v36 & 0x80000) != 0 )
          *(_OWORD *)(v21 + 24) = *(_OWORD *)*((_QWORD *)a2 + 3);
        if ( !v30 )
        {
          v27 = v41;
          *((_QWORD *)v21 + 2) = v41;
          if ( v7[4] != 3 )
            v27 = __rdtsc();
          *((_QWORD *)v21 + 5) = v27;
        }
        *(_DWORD *)v21 = v4 | v19;
        p_ClientId = &NtCurrentTeb()->ClientId;
        v47 = p_ClientId;
        UniqueThread = (int)p_ClientId->UniqueThread;
        v29 = v45;
        *((_DWORD *)v45 + 2) = UniqueThread;
        UniqueProcess = (int)p_ClientId->UniqueProcess;
        *((_DWORD *)v29 + 3) = UniqueProcess;
        _InterlockedDecrement((volatile signed __int32 *)(v40 + 12));
        v7 = v37;
        goto LABEL_44;
      }
      if ( (unsigned int)v19 <= 0xFFF8 )
        v12 = v7[53] < (unsigned int)v19 ? 234 : 8;
      else
        v12 = 534;
    }
    v31 = v12;
  }
LABEL_44:
  _InterlockedDecrement((volatile signed __int32 *)(qword_1801593C0 + 16LL * (unsigned int)v7[5] + 8));
  return v31;
}
