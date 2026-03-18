/*
 * XREFs of ?GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z @ 0x18019C390
 * Callers:
 *     ?GetInteractionContext@CInteraction@@UEBAJKPEAPEAUIInteractionContextWrapper@@@Z @ 0x1801693D0 (-GetInteractionContext@CInteraction@@UEBAJKPEAPEAUIInteractionContextWrapper@@@Z.c)
 *     ?GetInteractionContext@CInteractionRoot@@UEBAJKPEAPEAUIInteractionContextWrapper@@@Z @ 0x1801693F0 (-GetInteractionContext@CInteractionRoot@@UEBAJKPEAPEAUIInteractionContextWrapper@@@Z.c)
 *     ?DepartBufferedOutputPointer@CInteractionProcessor@@QEAA_NIW4InputType@@@Z @ 0x18019C274 (-DepartBufferedOutputPointer@CInteractionProcessor@@QEAA_NIW4InputType@@@Z.c)
 *     ?HasBufferedOutput@CInteractionProcessor@@QEAA_NIW4InputType@@@Z @ 0x18019C560 (-HasBufferedOutput@CInteractionProcessor@@QEAA_NIW4InputType@@@Z.c)
 *     ?IsBufferingOutput@CInteractionProcessor@@QEAA_NW4InputType@@@Z @ 0x18019C5E4 (-IsBufferingOutput@CInteractionProcessor@@QEAA_NW4InputType@@@Z.c)
 *     ?ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4InertiaFrameType@@PEAUIManipulationTelemetryData@@PEAW4PointerResult@@@Z @ 0x18019C658 (-ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4Inertia.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180070274 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ @ 0x180199EA4 (-AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ.c)
 */

__int64 __fastcall CInteractionProcessor::GetInteractionContext(CInteractionProcessor *a1, int a2, _QWORD *a3)
{
  unsigned int v3; // r9d
  int v6; // edx
  int v7; // edx
  __int64 (__fastcall ***v8)(_QWORD); // rax

  v3 = 0;
  *a3 = 0LL;
  v6 = a2 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 == 1 )
      {
        if ( CInteractionProcessor::AllowPenGestureDetection(a1) )
        {
          v3 = *((_QWORD *)a1 + 40) == 0LL ? 0x8007139F : 0;
          if ( *((_QWORD *)a1 + 40) )
          {
            Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))a1 + 40);
            v8 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)a1 + 40);
LABEL_12:
            *a3 = v8;
            return 0;
          }
        }
        else
        {
          return (unsigned int)-2147467259;
        }
      }
    }
    else
    {
      v3 = *((_QWORD *)a1 + 20) == 0LL ? 0x8007139F : 0;
      if ( *((_QWORD *)a1 + 20) )
      {
        Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))a1 + 20);
        v8 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)a1 + 20);
        goto LABEL_12;
      }
    }
  }
  else
  {
    v3 = *(_QWORD *)a1 == 0LL ? 0x8007139F : 0;
    if ( *(_QWORD *)a1 )
    {
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))a1);
      v8 = *(__int64 (__fastcall ****)(_QWORD))a1;
      goto LABEL_12;
    }
  }
  return v3;
}
