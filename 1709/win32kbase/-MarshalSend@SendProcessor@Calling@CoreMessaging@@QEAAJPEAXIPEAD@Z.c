/*
 * XREFs of ?MarshalSend@SendProcessor@Calling@CoreMessaging@@QEAAJPEAXIPEAD@Z @ 0x1C00878AC
 * Callers:
 *     CoreUICallSend @ 0x1C008726C (CoreUICallSend.c)
 * Callees:
 *     ?MarshalLPCWSTR@SendProcessor@Calling@CoreMessaging@@AEAAXPEAHPEBG@Z @ 0x1C008763C (-MarshalLPCWSTR@SendProcessor@Calling@CoreMessaging@@AEAAXPEAHPEBG@Z.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 *     ?Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z @ 0x1C015690C (-Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z.c)
 */

__int64 __fastcall CoreMessaging::Calling::SendProcessor::MarshalSend(
        CoreMessaging::Calling::SendProcessor *this,
        char *a2,
        int a3,
        char *a4)
{
  __int64 v5; // rax
  char *v6; // rcx
  __int64 v7; // rcx
  bool v8; // zf
  const unsigned __int16 **v9; // rbx
  int v10; // ecx
  unsigned int v11; // edx
  int *v12; // r9
  unsigned __int8 *v13; // rax
  unsigned int v14; // ecx
  size_t v15; // r8
  const unsigned __int16 *v16; // rdx
  char *v17; // rax
  char v18; // cl

  if ( ((a3 + 3) & 0xFFFFFFFC) != a3 )
    goto LABEL_45;
  *((_BYTE *)this + 112) = 0;
  v5 = -1LL;
  *((_QWORD *)this + 11) = a2;
  *((_QWORD *)this + 12) = a2;
  v6 = &a2[a3];
  if ( v6 >= a2 )
    v5 = (__int64)&a2[a3];
  *((_QWORD *)this + 13) = v5;
  if ( v6 < a2 )
LABEL_45:
    CoreMessaging::Calling::FailFast::Error((ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp", 0x9CuLL);
  if ( (unsigned int)(v5 - (_DWORD)a2) < 8 )
  {
    v7 = 0LL;
  }
  else
  {
    *((_QWORD *)this + 12) += 8LL;
    v7 = *((_QWORD *)this + 12) - 8LL;
  }
  *(_DWORD *)v7 = *((_DWORD *)this + 34);
  *(_WORD *)(v7 + 4) = *((_WORD *)this + 70);
  *(_WORD *)(v7 + 6) = *((_WORD *)this + 71);
  *((_DWORD *)this + 31) = 0;
  v8 = *((_DWORD *)this + 20) == 0;
  *((_QWORD *)this + 1) = *(_QWORD *)this;
  if ( !v8 )
  {
    v9 = (const unsigned __int16 **)(a4 - 8);
    while ( 1 )
    {
      if ( (unsigned int)(*((_DWORD *)this + 26) - *((_DWORD *)this + 24)) < 4
        || (*((_QWORD *)this + 12) += 4LL, *((_QWORD *)this + 12) == 4LL) )
      {
        CoreMessaging::Calling::FailFast::Error((ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp", 0xCAuLL);
      }
      v10 = *((_DWORD *)this + *((unsigned int *)this + 31) + 4);
      *(_DWORD *)(*((_QWORD *)this + 12) - 4LL) = v10;
      *((_DWORD *)this + 21) = v10;
      v11 = (v10 + 3) & 0xFFFFFFFC;
      if ( *((_DWORD *)this + 26) - *((_DWORD *)this + 24) < v11
        || (*((_QWORD *)this + 12) += v11, (v12 = (int *)(*((_QWORD *)this + 12) - v11)) == 0LL) )
      {
        CoreMessaging::Calling::FailFast::Error((ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp", 0xD4uLL);
      }
      v13 = (unsigned __int8 *)*((_QWORD *)this + 1);
      v14 = *v13;
      *((_QWORD *)this + 1) = v13 + 1;
      if ( v14 <= 9 )
        break;
      switch ( v14 )
      {
        case 0xAu:
          goto LABEL_37;
        case 0xBu:
        case 0xCu:
          goto LABEL_32;
        case 0xDu:
          CoreMessaging::Calling::SendProcessor::MarshalLPCWSTR(this, v12, *++v9);
          break;
        case 0xEu:
          ++v9;
          v15 = *((unsigned int *)this + 21);
          v16 = *v9;
          *((_QWORD *)this + 1) = v13 + 3;
          memmove(v12, v16, v15);
          break;
        case 0xFu:
          CoreMessaging::Calling::FailFast::Error(
            (ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp",
            0x161uLL);
        case 0x10u:
          CoreMessaging::Calling::FailFast::Error(
            (ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp",
            0x16EuLL);
        default:
LABEL_35:
          CoreMessaging::Calling::FailFast::Error(
            (ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp",
            0x17DuLL);
      }
LABEL_20:
      if ( ++*((_DWORD *)this + 31) >= *((_DWORD *)this + 20) )
        goto LABEL_21;
    }
    if ( v14 == 9 )
    {
      *(float *)v12 = *(double *)++v9;
      goto LABEL_20;
    }
    if ( v14 != 1 && v14 != 2 && v14 != 3 )
    {
      if ( v14 == 4 )
        goto LABEL_37;
      if ( v14 != 5 && v14 != 6 && v14 != 7 )
      {
        if ( v14 != 8 )
          goto LABEL_35;
LABEL_37:
        *(_QWORD *)v12 = *++v9;
        goto LABEL_20;
      }
    }
LABEL_32:
    *v12 = *(_DWORD *)++v9;
    goto LABEL_20;
  }
LABEL_21:
  v17 = (char *)*((_QWORD *)this + 1);
  v18 = *v17;
  *((_QWORD *)this + 1) = v17 + 1;
  if ( v18 )
    CoreMessaging::Calling::FailFast::Error((ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp", 0x18FuLL);
  return 0LL;
}
