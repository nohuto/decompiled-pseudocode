/*
 * XREFs of ?UMPDDrvDitherColor@@YAKPEAUDHPDEV__@@KKPEAK@Z @ 0x1C0284E60
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C00B8E38 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00B8EA4 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00B9504 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00B9754 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C00B98AC (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall UMPDDrvDitherColor(struct DHPDEV__ *a1, unsigned int a2, unsigned int a3, unsigned int *a4)
{
  __int64 v8; // r9
  UMPDOBJ *v9; // rbx
  unsigned int v10; // edi
  __int64 v11; // rcx
  int v12; // ecx
  int v13; // edx
  unsigned __int64 v14; // rcx
  unsigned int v15; // esi
  char *KernelPtr; // rax
  size_t Size; // [rsp+20h] [rbp-98h]
  UMPDOBJ *v19; // [rsp+30h] [rbp-88h] BYREF
  _DWORD v20[2]; // [rsp+38h] [rbp-80h] BYREF
  _QWORD v21[6]; // [rsp+40h] [rbp-78h] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v19);
  memset(v21, 0, sizeof(v21));
  v9 = v19;
  v10 = 0;
  if ( !v19 )
  {
LABEL_17:
    XUMPDOBJ::~XUMPDOBJ(&v19);
    return 0LL;
  }
  v11 = *((_QWORD *)a1 + 227);
  v21[0] = 0xD00000030LL;
  v21[2] = *(_QWORD *)v19;
  v21[3] = v11;
  v21[4] = __PAIR64__(a3, a2);
  if ( a2 == 2 )
  {
    v12 = 1;
  }
  else
  {
    v12 = *((_DWORD *)a1 + 531);
    if ( (unsigned int)(v12 - 1) > 7 )
    {
      v13 = 0;
      goto LABEL_7;
    }
  }
  v13 = dword_1C02F0290[v12 - 1];
LABEL_7:
  if ( !v13 )
    goto LABEL_17;
  v14 = (((v13 * (unsigned int)*((unsigned __int16 *)a1 + 1064) + 31) >> 3) & 0x1FFFFFFC)
      * (unsigned __int64)*((unsigned __int16 *)a1 + 1065);
  v15 = -1;
  if ( v14 <= 0xFFFFFFFF )
    v15 = v14;
  v20[1] = v15;
  if ( v14 > 0xFFFFFFFF )
    goto LABEL_17;
  v21[5] = UMPDOBJ::_AllocUserMem(v19, v15, 0LL, v8);
  if ( v21[5] )
  {
    LODWORD(Size) = 4;
    if ( (unsigned int)UMPDOBJ::Thunk(v9, v21, 48LL, v20, Size) != -1 )
    {
      if ( v21[5] )
      {
        KernelPtr = UMPDOBJ::GetKernelPtr(v9, (char *)v21[5]);
        memmove(a4, KernelPtr, v15);
      }
      v10 = v20[0];
    }
  }
  XUMPDOBJ::~XUMPDOBJ(&v19);
  return v10;
}
