/*
 * XREFs of AcpiNotifyDiscoverDeleteMainCompletion @ 0x1C0053C20
 * Callers:
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C002686C (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 *     AcpiNotifyPlExtDeleteDeviceAsync @ 0x1C0053CE8 (AcpiNotifyPlExtDeleteDeviceAsync.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

void __fastcall AcpiNotifyDiscoverDeleteMainCompletion(unsigned int *a1)
{
  unsigned int *v2; // rbx
  unsigned int **v3; // rax
  void (__fastcall *v4)(_QWORD, _QWORD, _QWORD); // rax

  while ( 1 )
  {
    v2 = *(unsigned int **)a1;
    if ( *(unsigned int **)a1 == a1 )
      break;
    v3 = *(unsigned int ***)v2;
    if ( *((unsigned int **)v2 + 1) != a1 || v3[1] != v2 )
      __fastfail(3u);
    *(_QWORD *)a1 = v3;
    v3[1] = a1;
    v4 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))*((_QWORD *)v2 + 5);
    if ( !*((_BYTE *)a1 + 16) )
    {
      if ( v4 )
        v4(*((_QWORD *)v2 + 6), v2[6], 0LL);
LABEL_11:
      AMLIDereferenceHandleEx(*((volatile signed __int32 **)v2 + 2), 0LL);
      goto LABEL_12;
    }
    if ( v4 )
      v4(*((_QWORD *)v2 + 6), v2[6], *((_QWORD *)v2 + 4));
    if ( (v2[6] & 0x80000000) != 0 )
      goto LABEL_11;
LABEL_12:
    if ( *((_BYTE *)a1 + 16) )
      ExFreePoolWithTag(*((PVOID *)v2 + 8), 0x53706341u);
    ExFreePoolWithTag(v2, 0x4E706341u);
  }
  ExFreePoolWithTag(a1, 0x4E706341u);
}
